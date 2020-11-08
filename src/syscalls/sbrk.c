#include <sys/types.h>
#include <errno.h>
#include <mmlib.h>

extern char * _heap;

static void *pagebreak = (char *)&_heap;
static void *maxcuralloc = (char *)&_heap;

caddr_t sbrk(int incr)
{
        int pages;
        char *ppMemRet;
        void *ptr = pagebreak;
        int erc;

        /* Just a query of where current brk is */

        if(incr == 0)
        {
                return ptr;
        }

        /* See if we can satisfy the current request
         * out of memory already allocated */

        if(((char *)pagebreak + incr) < (char *) (maxcuralloc))
        {
                pagebreak = ((char*) pagebreak) + incr;
                return ptr;
        }

        /* MMURTL allocates whole pages, so we have to compute
         * nearest page ceiling */

        pages = incr / 4096;
        if(incr % 4096)
                pages++;

        erc = AllocPage(pages, &ppMemRet);

        if(erc)
        {
                errno = ENOMEM;
                return (caddr_t) -1;
        }
        else
        {
                pagebreak = ((char*) pagebreak) + incr;
                maxcuralloc = ((char *) maxcuralloc) + (pages * 4096);
                return ptr;
        }
}

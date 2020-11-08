#include <unistd.h>
#include <errno.h>
#include <mmlib.h>

int unlink(char *name)
{
        int delfile;
        int erc;

        /* MMURTL DeleteFile system call takes a file handle to an */
        /* open file to delete a file, so we have to open the file first. */
        if((delfile = open(name, O_RDWR)) < 0)
        {
                errno = ENOENT;
                return -1;
        }

        erc = DeleteFile(delfile);

        if(erc)
        {
                errno = EINVAL;
                return -1;
        }
        else
                return erc;
}

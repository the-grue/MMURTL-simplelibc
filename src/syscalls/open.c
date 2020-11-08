#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <mmlib.h>


int open(const char *name, int flags, ...)
{
        int pdHandleRet;
        int erc;
        int fnamelen = strlen(name);

        /* We'll only try to check for flags that are supported by */
        /* MMURTL and group as required.  For example, we'll ignore  */
        /* the ... for mode since FAT doesn't support the Unix type */
        /* file permissions rwxrwxrwx */

        /* First, see if we are trying to create a file */

        if(flags & O_CREAT)
        {
                erc = CreateFile((char *) name, fnamelen, 0);

                if(erc == ERCNOTAFILE)
                {
                        errno = EINVAL;
                        return -1;
                }
                if(erc == ERCDUPNAME)
                {
                        if(flags & O_EXCL)
                        {
                                errno = EINVAL;
                                return -1;
                        }
                        if(flags & O_TRUNC)
                        {
                                erc = OpenFile((char *) name, fnamelen, 1, 1, &pdHandleRet);
                                if(erc != ERCOK)
                                {
                                        errno = EINVAL;
                                        return -1;
                                }
                                erc = DeleteFile(pdHandleRet);
                                if(erc != ERCOK)
                                {
                                        errno = EINVAL;
                                        return -1;
                                }
                                erc = CreateFile((char *) name, fnamelen, 0);
                                if(erc != ERCOK)
                                {
                                        errno = EINVAL;
                                        return -1;
                                }

                        }
                }
        }

        /* Now open the file if we got to here */

        erc = OpenFile((char *) name, fnamelen, ((flags & 2) >> 1), 1, &pdHandleRet);
        if(erc != ERCOK)
        {
                errno = EINVAL;
                return -1;
        }

        if(flags & O_APPEND)
                if(lseek(pdHandleRet, 0, SEEK_END) == -1)
                {
                        close(pdHandleRet);
                        errno = EINVAL;
                        return -1;
                }

        return pdHandleRet;
}

#include <errno.h>
#include <mmlib.h>

int write(int file, char *ptr, int len)
{
        int *pdBytesRet;
        int erc;

        /* Since MMURTL uses 1 for keyboard, remap writes */
        /* for file handle 1 to file handle 2, which also */
        /* covers stderr */
        if(file == 1)
                file = 2;

        erc = WriteBytes(file, ptr, len, pdBytesRet);

        if(erc)
        {
                errno = EINVAL;
                return -1;
        }
        else
                return *pdBytesRet;
}

#include <errno.h>
#include <mmlib.h>

int read(int file, char *ptr, int len)
{
        int pdBytesRet;
        int erc;

        /* Since MMURTL uses 1 for keyboard, remap reads */
        /* for file handle 0 (stdin) to file handle 1 */

        if(file == 0)
                file = 1;

        erc = ReadBytes(file, ptr, len, &pdBytesRet);

        if(erc)
        {
                errno = EINVAL;
                return -1;
        }
        else
                return pdBytesRet;
}

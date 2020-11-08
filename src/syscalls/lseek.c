#include <unistd.h>
#include <errno.h>
#include <mmlib.h>

int lseek(int file, int ptr, int dir)
{
        int lfa;
        int size;
        int erc;

        GetFileSize(file, &size);

        switch(dir)
        {
                case SEEK_SET:
                                if(ptr < 0 || ptr > size)
                                {
                                        errno = EINVAL;
                                        return -1;
                                }
                                lfa = ptr;
                                break;

                case SEEK_CUR:
                                GetFileLFA(file, &lfa);
                                lfa += ptr;
                                if(lfa < 0 || lfa > size)
                                {
                                        errno = EINVAL;
                                        return -1;
                                }
                                break;

                case SEEK_END:
                                lfa = ptr + size;
                                if(lfa < 0)
                                {
                                        errno = EINVAL;
                                        return -1;
                                }
                                if(ptr > 0)
                                        lfa = -1;
                                break;

                default:
                                errno = EINVAL;
                                return -1;
        }

        erc = SetFileLFA(file, lfa);

        if(erc)
        {
                errno = EINVAL;
                return -1;
        }
        else
                return lfa;
}

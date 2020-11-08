#include <mmlib.h>

int close(int file)
{
        /*  MMURTL CloseFile will not allow close of file handles */
        /*  0-2 and will just return 0 if you select one of them. */
        return CloseFile(file);
}

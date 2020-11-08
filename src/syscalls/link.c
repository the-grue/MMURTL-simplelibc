#include <errno.h>

int link(char *old, char *new)
{
        /* MMURTL doesn't support file linking.  We could make a copy */
        /* of the file, but for now we'll just return an error.  */
        errno = EMLINK;
        return -1;
}

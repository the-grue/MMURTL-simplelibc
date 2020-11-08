#include <unistd.h>
#include <errno.h>

int stat(const char *file, struct stat *st)
{
        st->st_mode = S_IFCHR;
        return 0;
}

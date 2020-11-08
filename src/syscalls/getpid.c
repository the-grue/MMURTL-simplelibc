#include <mmlib.h>

int getpid(void)
{
        int pdJobNumRet;

        GetJobNum(&pdJobNumRet);

        return pdJobNumRet;
}

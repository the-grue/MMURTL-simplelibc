#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <mmlib.h>

int kill(int pid, int sig)
{
        /* No real interprocess signals in MMURTL kernel, so we either */
        /* raise sig against the requesting process or kill another */
        /* job with KillJob and ignore sig.  This may return an error. */
        if(getpid() == pid)
                return raise(sig);
        else
                return KillJob(pid);
}

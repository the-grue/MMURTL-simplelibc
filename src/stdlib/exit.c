#include <mmlib.h>

void _exit(int ExitCode)
{
	ExitJob(ExitCode);
}

void exit(int ExitCode)
{
	ExitJob(ExitCode);
}

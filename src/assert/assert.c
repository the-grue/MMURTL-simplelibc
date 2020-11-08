#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void Assert(char *message)
{
	fputs(message, stderr);
	fputs(" -- assertion failed\r\n", stderr);
	abort();
}

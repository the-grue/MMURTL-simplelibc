#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void *SigTable[SIGNALS] = {0};

int raise(int sig)
{	
	void *s;

	if (sig <= 0 || SIGNALS <= sig)
		return (-1);	
	if ((s = SigTable[sig]) != SIG_IGN && s != SIG_DFL)
	{	
	    SigTable[sig] = SIG_DFL;
	    (*s)(sig);
	}
    else if (s == SIG_DFL)
	{	
    	char ac[10], *p;

		*(p = &ac[(sizeof ac) - 1]) = '\0';
		do 
            *--p = sig % 10 + '0';
		while ((sig /= 10) != 0);
	
    	fputs("terminating on signal #", stderr);
		fputs(p, stderr);
	
    	exit(sig);
	}
	return (0);
}
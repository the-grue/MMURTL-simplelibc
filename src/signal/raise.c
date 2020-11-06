#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

SigFun *SigTable[SIGNALS] = {0};

int raise(int sig)
{	
	SigFun *s;

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
	
    	fputs("Terminating on signal #", stderr);
		fputs(p, stderr);
		fputs("\r\n", stderr);
	
    	exit(sig);
	}
	return (0);
}

#include <signal.h>

extern void *SigTable[SIGNALS];

void *(signal)(int sig, void *fun(int))
{
	void *s;

	if (sig <= 0 || SIGNALS <= sig || fun == SIG_ERR)
		return (SIG_ERR);	

	s = SigTable[sig], SigTable[sig] = fun;
	return (s);
}
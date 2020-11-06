#include <signal.h>

extern SigFun *SigTable[SIGNALS];
extern unsigned int *_stack;
extern unsigned int *_header;

void (*signal(int sig, void (*handler)(int)))(int)
{
	SigFun *s;
	unsigned int stack = (unsigned int) &_stack;
	unsigned int header = (unsigned int) &_header;
	unsigned int signal_addr = 0x40000000 + stack - header;

	if (sig <= 0 || SIGNALS <= sig || handler == SIG_ERR)
		return (SIG_ERR);	

	handler = (void *) ((unsigned int) handler + signal_addr);

	s = SigTable[sig], SigTable[sig] = handler;
	return (s);
}

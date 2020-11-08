extern unsigned int *_stack;
extern unsigned int *_header;

unsigned int fixpfunc(unsigned int pfunc)
{
	unsigned int stack = (unsigned int) &_stack;
	unsigned int header = (unsigned int) &_header;
	unsigned int signal_addr = 0x40000000 + stack - header + pfunc;

	return (signal_addr);
}

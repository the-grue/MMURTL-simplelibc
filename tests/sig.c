#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

void mysig(int x);

int main(void)
{
	/*asm("int $3;");*/
	/*signal(16, mysig + 0x40001000 - 0x37);*/
	signal(16, mysig);
	raise(16);
	raise(16);
	/*abort();*/
}

void mysig(int x)
{
	puts("Hello from mysig!\r\n");
}

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	isalnum('x') ? puts("x isalnum ") : puts("x not isalnum ");	
	isalpha('x') ? puts("x isalpha ") : puts("x not isalpha ");	
	iscntrl('x') ? puts("x iscntrl ") : puts("x not iscntrl ");	
	isdigit('x') ? puts("x isdigit ") : puts("x not isdigit ");	
	isgraph('x') ? puts("x isgraph ") : puts("x not isgraph ");	
	islower('x') ? puts("x islower ") : puts("x not islower ");	
	isprint('x') ? puts("x isprint ") : puts("x not isprint ");	
	ispunct('x') ? puts("x ispunct ") : puts("x not ispunct ");	
	isspace('x') ? puts("x isspace ") : puts("x not isspace ");	
	isupper('x') ? puts("x isupper ") : puts("x not isupper ");	
	isxdigit('x') ? puts("x isxdigit ") : puts("x not isxdigit ");	
	isupper(toupper('x')) ? puts("X isupper ") : puts("X not isupper ");
	islower(tolower('X')) ? puts("x islower ") : puts("x not islower ");
	puts("About to return to calling program\r\n");
	puts("                                                                                ");

	return 0;
}

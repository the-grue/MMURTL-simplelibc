#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	isalnum('x') ? fputs("x isalnum ", stdout) : fputs("x not isalnum ", stdout);	
	isalpha('x') ? fputs("x isalpha ", stdout) : fputs("x not isalpha ", stdout);	
	iscntrl('x') ? fputs("x iscntrl ", stdout) : fputs("x not iscntrl ", stdout);	
	isdigit('x') ? fputs("x isdigit ", stdout) : fputs("x not isdigit ", stdout);	
	isgraph('x') ? fputs("x isgraph ", stdout) : fputs("x not isgraph ", stdout);	
	islower('x') ? fputs("x islower ", stdout) : fputs("x not islower ", stdout);	
	isprint('x') ? fputs("x isprint ", stdout) : fputs("x not isprint ", stdout);	
	ispunct('x') ? fputs("x ispunct ", stdout) : fputs("x not ispunct ", stdout);	
	isspace('x') ? fputs("x isspace ", stdout) : fputs("x not isspace ", stdout);	
	isupper('x') ? fputs("x isupper ", stdout) : fputs("x not isupper ", stdout);	
	isxdigit('x') ? fputs("x isxdigit ", stdout) : fputs("x not isxdigit ", stdout);	
	isupper(toupper('x')) ? fputs("X isupper ", stdout) : fputs("X not isupper ", stdout);
	islower(tolower('X')) ? fputs("x islower ", stdout) : fputs("x not islower ", stdout);
	fputs("                                                                                ", stdout);

	exit(0);
}

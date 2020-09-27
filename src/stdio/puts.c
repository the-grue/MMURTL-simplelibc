/*
 * gcc library source for MMURTL
 */
#include <stdio.h>

/********************* puts *************************
 Writes the string pointed to by *s to stdout and
 appends a newline.
 No EOL translation is done. The terminating NULL is
 not placed in the file.
******************************************************/

int puts(const char *s)
{
int erc, ch;
char *r = "\n\r";

	erc = 0;

	erc = fputs(s, stdout);

	if(erc != EOF)
		erc = fputs(r, stdout);
	
	if (erc)
		ch = EOF;
	else
		ch = 1;
	return (ch);
}

/*
 * gcc library source for for MMURTL
 */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <mmlib.h>

/********************* fputs *************************
 Writes the string pointed to by *s to file *stream
 No EOL translation is done. The terminating NULL is
 not placed in the file.
******************************************************/

int fputs(const char *s, FILE *stream)
{
int erc, i, j, ch;

	erc = 0;
	i = strlen(s);
	if (i)
	{
		erc = WriteBytes(stream->handle, (char *)s, i, &j);
	}
	if (erc)
		ch = EOF;
	else
		ch = 1;
	return (ch);
}

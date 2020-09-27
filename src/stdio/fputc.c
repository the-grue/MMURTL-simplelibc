/*
 * gcc library source for MMURTL
 */
#include <stdio.h>
#include <errno.h>
#include <mmlib.h>

/********** fgetc ***************************************
*  Read a char and return from function. Return EOF (-1)
*  If EOF. This returns char as an int.
**********************************************************/

/*************** fputc ***************/

/* writes the char (int) in c to the stream.
   No translation is done to the char.
*/

int fputc(int c, FILE *stream)
{
int erc, i, ch;
	erc = WriteBytes (stream->handle, (char *) &c, 1, &i);
	if (erc)
		ch = EOF;
	else
		ch = c;
	return (ch);
}

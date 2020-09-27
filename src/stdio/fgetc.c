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

int fgetc(FILE *stream)
{
int erc, i, chl;
unsigned char ch;

	erc = ReadBytes (stream->handle, &ch, 1, &i);
	if ((erc) && (!i))
		return EOF;
	else
		chl = ch;
	return (chl);
}

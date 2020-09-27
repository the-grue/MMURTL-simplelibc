/*
 * gcc library source for MMURTL
 */
#include <stdio.h>
#include <errno.h>
#include <mmlib.h>

/*************** ftell ******************************/
/* returns the file pointer (Logical File Address)  */
/* of stream.                                       */

long ftell(FILE *stream)
{
int erc, i;
	erc = GetFileLFA(stream->handle, &i);
	if (erc)
		i = EOF;
	return (i);
}

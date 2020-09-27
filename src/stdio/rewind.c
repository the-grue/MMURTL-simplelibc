/*
 * gcc library source for MMURTL
 */
#include <stdio.h>
#include <errno.h>
#include <mmlib.h>

/*************** rewind *****************************/
/* Set file LFA to 0.                               */

void rewind(FILE *stream)
{
long erc;
	erc = SetFileLFA(stream->handle, 0);
}

/*
 * gcc library source for MMURTL
 */
#include <stdio.h>
#include <errno.h>
#include <mmlib.h>

/********** fread ***************************************
*  reads nobjects of nsize from stream and returns them
*  to ptr.
**********************************************************/

size_t fread(void *ptr, size_t size, size_t nobj, FILE *stream)
{
int erc, i, j;

	erc = ReadBytes(stream->handle, ptr, size*nobj, &i);
	if (erc < 2)
		j = i/size;		/* number of objects of size */
	else
		j = 0;			/* nothing! */
	return (j);
}

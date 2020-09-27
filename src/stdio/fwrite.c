/*
 * gcc library source for MMURTL
 */
#include <stdio.h>
#include <errno.h>
#include <mmlib.h>

/********** fwrite ***************************************
*  writes nobjects of nsize to stream from ptr.
**********************************************************/

size_t fwrite(const void *ptr, size_t size, size_t nobj, FILE *stream)
{
int erc, i, j;

	erc = WriteBytes (stream->handle, (char *) ptr, size*nobj, &i);
	if (!erc)
		j = i/size;		/* number of objects of size */
	else {
		errno = erc;
		j = 0;			/* nothing! */
	}
	return (j);
}

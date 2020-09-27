/*
 * gcc library source for MMURTL
 */
#include <stdio.h>
#include <errno.h>
#include <mmlib.h>

/*************** fclose ***************/

int fclose(FILE *stream)
{
int erc, i;
erc = CloseFile(stream->handle);
if (erc) {
	errno = erc;
	i = EOF;
	}
else
	i = 0;
return i;
}

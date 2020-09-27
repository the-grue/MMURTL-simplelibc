/*
 * gcc library source for MMURTL
 */
#include <stdio.h>
#include <errno.h>
#include <mmlib.h>

/*************** fseek *****************************/
/* Set file LFA to desired position.               */

int fseek(FILE *stream, long offset, int origin)
{
int erc, crnt;

	if (origin==SEEK_CUR)
		erc = GetFileLFA(stream->handle, &crnt);
	else if (origin==SEEK_END)
	{
		offset = 0;
		crnt = -1;	/* MMURTL Seeks to EOF */
	}
	else if (origin==SEEK_SET)
		crnt = 0;
	else
		return 1;

	erc = SetFileLFA(stream->handle, offset+crnt);
	if (erc)
		return (1);
	else
		return (0);
}

/*
 * gcc library source for MMURTL
 */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <mmlib.h>

/*************** remove ***************/

int remove(const char *name)
{
int handle, erc;

	erc =  OpenFile((char *) name, strlen(name), 1, 0, &handle);
	if (erc)
	{
		errno = erc;
		return(-1);
	}
	erc =  DeleteFile(handle);
	if (erc)
	{
		errno = erc;
		CloseFile(handle);
		return(-1);
	}
	return(0);
}

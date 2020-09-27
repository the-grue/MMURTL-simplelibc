/*
 * gcc library source for MMURTL
 */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <mmlib.h>

/*************** rename ***************/

int rename(const char *oldname, const char *newname)
{
int  erc;

	erc =  RenameFile((char *) oldname, strlen(oldname), (char *) newname, strlen(newname));
	if (erc) {
		errno = erc;
		return(-1);
	}
	return(0);
}

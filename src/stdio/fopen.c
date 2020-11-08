/*
 * gcc library source for MMURTL
 */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <mmlib.h>


/*************** fopen ***************
 opens a file in stream mode for reading,
 or reading and writing (modify mode).
*************************************/

FILE *fopen(const char *name, const char *mode)
{
int handle, lmode, fcreate, fdiscard, erc, fappend;

	erc = 0;
	handle = 0;
	fappend = 0;
	fcreate = 0;
	fdiscard = 0;

	if (*mode=='r')
		lmode = 0;
	else if (*mode=='w')
	{
		lmode = 1;
		fcreate = 1;
		fdiscard = 1;
	}
	else if (*mode=='a') {
		fappend = 1;
		fcreate = 1;
		lmode = 1;
	}
	else
		return (0);

	/* see if they want to update also */

	if ((mode[1] == '+') || (mode[2] == '+'))
		lmode = 1;

	if (fcreate)		/* try to create with archive bit set */
		erc =  CreateFile((char *) name, strlen(name), 0x20);

	if (erc == ERCDUPNAME)
		erc = 0;

	if (!erc)
		erc =  OpenFile((char *) name, strlen(name), lmode, 1, &handle);
	if (erc)
	{
		errno = erc;
		handle = 0;
	}
	if ((!erc) && (fappend))
	{
		erc = SetFileLFA(handle, 0xffffffff);		/* EOF */
	}
	if ((!erc) && (fdiscard))
	{
		erc = SetFileSize(handle, 0);		/*  */
	}

	if(!erc)
	{
		_Files[handle].handle = handle;

		return &_Files[handle];
	}
	else
	{
		return NULL;
	}
}

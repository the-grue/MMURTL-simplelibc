/*
 * errno variable and values for gcc for the MMURTL OS
 *
 */

#ifndef _ERRNO
#define _ERRNO

#define	ENOENT		2
#define	ENOMEM		12
#define	EINVAL		22
#define	EMLINK		31
#define	EDOM		33
#define	ERANGE		34
#define EFPOS		35

/*
 * MMURTL specific ERC codes
 */

#define	ERCOK		0
#define	ERCNOTAFILE	202
#define ERCDUPNAME	226
#define ERRMAX		227

extern int errno;

#endif

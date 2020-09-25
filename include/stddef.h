/*
 *
 * stddef values and macros for gcc for MMURTL
 * 
 */

#ifndef _STDDEF
#define _STDDEF

#define	NULL	(void *)0
#define offsetof(type, member) ((size_t)&((type *)0)->member)

#ifndef	_SIZE_T
#define _SIZE_T
typedef unsigned int size_t;
#endif

#ifndef	_WCHAR_T
#define	_WCHAR_T
typedef unsigned short wchar_t;
#endif

typedef int ptrdiff_t;

#endif

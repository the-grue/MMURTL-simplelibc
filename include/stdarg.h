/*
 * stdarg macros for variable argument list and
 * management for gcc for MMURTL
 *
 */

#ifndef	_STDARG
#define	_STDARG

typedef char *va_list;

#define va_arg(ap, arg)	\
       (*(arg *)(((ap) += _Bnd(arg, 3)) - _Bnd(arg, 3)))	
#define va_end(ap) (void)0
#define va_start(ap, arg)	\
	(void)((ap) = (char *)&(arg) + _Bnd(arg, 3))

#define _Bnd(X, bnd) (sizeof(X) + (bnd) & ~(bnd))

#endif

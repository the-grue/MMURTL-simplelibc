# MMURTL-simplelibc
A simple libc for MMURTL

Implemented:

<ctype.h>

	int isalnum(int c);  -> isalnum.c
	int isalpha(int c);  -> isalpha.c
	int iscntrl(int c);  -> iscntrl.c
	int isdigit(int c);  -> isdigit.c
	int isgraph(int c);  -> isgraph.c
	int islower(int c);  -> islower.c
	int isprint(int c);  -> isprint.c
	int ispunct(int c);  -> ispunct.c
	int isspace(int c);  -> isspace.c
	int isupper(int c);  -> isupper.c
	int isxdigit(int c); -> isxdigit.c
	int tolower(int c);  -> tolower.c
	int toupper(int c);  -> toupper.c

<errno.h>

	extern int errno;    -> errno.c

<limits.h>

<stdarg.h>

	void va_start(va_list ap, lastarg);
	type va_arg(va_list ap, type);
	void va_end(va_list ap);

<stddef.h>

<stdio.h>

	char* fputs(const char* s, FILE* stream);  -> fputs.c

<stdlib.h>

	void exit(int status); -> exit.c

<string.h>

	size_t strlen(const char* cs);  -> strlen.c

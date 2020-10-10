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

	int fputs(const char* s, FILE* stream);  -> fputs.c
	int puts(const char* s);  -> puts.c
	FILE *fopen(const char *name, const char *mode); -> fopen.c
	int rename(const char *oldname, const char *newname); -> rename.c
	int remove(const char *name);
	int fclose(FILE *stream);
	int fgetc(FILE *stream);
	char *fgets(char *s, int n, FILE *stream);
	long ftell(FILE *stream);
	void rewind(FILE *stream);
	int fseek(FILE *stream, long offset, int origin);
	size_t fread(void *ptr, size_t size, size_t nobj, FILE *stream);
	size_t fwrite(const void *ptr, size_t size, size_t nobj, FILE *stream);
	int fputc(int c, FILE *stream);


<stdlib.h>

	void exit(int status); -> exit.c

<string.h>

	size_t strlen(const char* cs);  -> strlen.c
	int strcmp(const char* cs, const char* ct); -> strcmp.c
	int strncmp(const char* cs, const char* ct, int n); -> strncmp.c
	char* strcpy(char* s, const char* ct); -> strcpy.c
	char* strncpy(char* s, const char* ct, int n); -> strncpy.c
	char* strcat(char* s, const char* ct); -> strcat.c
	char* strncat(char* s, const char* ct, int n); -> strncat.c
	char* strchr(const char* cs, int c); -> strchr.c




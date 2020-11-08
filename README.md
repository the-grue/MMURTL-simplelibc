# MMURTL-simplelibc
A simple libc for MMURTL

Implemented:

<assert.h>

	void assert(int expression); -> assert.c

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
	int remove(const char *name); -> remove.c
	int fclose(FILE *stream); -> fclose.c
	int fgetc(FILE *stream); -> fgetc.c
	char *fgets(char *s, int n, FILE *stream); -> fgets.c
	long ftell(FILE *stream); -> ftell.c
	void rewind(FILE *stream); -> rewiind.c
	int fseek(FILE *stream, long offset, int origin); -> fseek.c
	size_t fread(void *ptr, size_t size, size_t nobj, FILE *stream); -> fread.c
	size_t fwrite(const void *ptr, size_t size, size_t nobj, FILE *stream); -> fwrite.c
	int fputc(int c, FILE *stream); -> fputc.c
	int fprintf(FILE *stream, const char *format, ...); -> print.c
	int printf(const char *format, ...); -> print.c
	int sprintf(char *str, const char *format, ...); -> print.c

<stdlib.h>

	void exit(int status); -> exit.c
	int rand(void); -> rand.c
	void srand(unsigned int seed); -> srarnd.c
	void abort(void); -> abort.c
	int atoi(const char *s); -> atoi.c
	long int atol(const char *s); -> atol.c
	void *calloc(size_t nobj, size_t size); -> calloc.c
	void *malloc(size_t size); -> malloc.c
	void free(void *p); -> free.c


<string.h>

	size_t strlen(const char* cs);  -> strlen.c
	int strcmp(const char* cs, const char* ct); -> strcmp.c
	int strncmp(const char* cs, const char* ct, int n); -> strncmp.c
	char* strcpy(char* s, const char* ct); -> strcpy.c
	char* strncpy(char* s, const char* ct, int n); -> strncpy.c
	char* strcat(char* s, const char* ct); -> strcat.c
	char* strncat(char* s, const char* ct, int n); -> strncat.c
	char* strchr(const char* cs, int c); -> strchr.c

<signal.h>

	void * signal(int sig, void (*handler)(int)); -> signal.c
	int raise(int sig); -> raise.c

UNIX like MMURTL System Calls

<unistd.h> (<sys/types.h> <sys/fcntl.h> <sys/time.h> <sys/times.h> <sys/stat.h>)

	int close(int file); -> close.c
	int stat(const char *file, struct stat *st); -> stat.c
	int getpid(void); -> getpid.c
	int isatty(int file); -> isatty.c
	int kill(int pid, int sig); -> kill.c
	int link(char *old, char *new); -> link.c
	int lseek(int file, int ptr, int dir); -> lseek.c
	int open(const char *name, int flags, ...); -> open.c
	int read(int file, char *ptr, int len); -> read.c
	caddr_t sbrk(int incr); -> sbrk.c
	int unlink(char *name); -> unlink.c
	int write(int file, char *ptr, int len); -> write.c


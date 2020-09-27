/***********************************************
 gcc standard I/O definitions for MMURTL
************************************************/

#ifndef _STDIO
#define _STDIO

/*#define FILE	unsigned int*/
typedef struct {
	unsigned int handle;
}FILE;
#define	EOF	-1
#define NULL	0


extern FILE *stdin; 
extern FILE *stdout;
extern FILE *stderr;

#define SEEK_SET	0
#define SEEK_CUR	1
#define SEEK_END	2

#define FILENAME_MAX	64
#define	FOPEN_MAX	16
#define	TMP_MAX		16

extern FILE _Files[FOPEN_MAX];

#define	ModeRead	0
#define	ModeModify	1

#ifndef	_SIZE_T
#define _SIZE_T
typedef unsigned int size_t;
#endif

/* Implemented  */

int fputs(const char *s, FILE *stream);
int puts(const char *s);
FILE *fopen(const char *name, const char *mode);
int rename(const char *oldname, const char *newname);
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

/*  Not yet implemented  */




extern int printf(char *fmt, ...);
extern int sprintf(char *s, char *fmt, ...);
extern int fprintf(FILE *stream, char *fmt, ...);

#endif

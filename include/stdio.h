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

#define	ModeRead	0
#define	ModeModify	1

extern FILE *fopen(char *name, char *mode);
extern int fclose(FILE *stream);
extern int remove(char *name);
extern int rename(char *oldname, char *newname);

extern int fgetc(FILE *stream);
extern char *fgets(char *s, long n, FILE *stream);

int fputs(const char *s, FILE *stream);
extern int fputc(long c, FILE *stream);

extern int printf(char *fmt, ...);
extern int sprintf(char *s, char *fmt, ...);
extern int fprintf(FILE *stream, char *fmt, ...);

extern int ftell(FILE *stream);
extern int rewind(FILE *stream);
extern void fseek(FILE *stream, long offset, long origin);
extern int fread(char *ptr, long size, long nobj, FILE *stream);
extern int fwrite(char *ptr, long size, long nobj, FILE *stream);

#endif

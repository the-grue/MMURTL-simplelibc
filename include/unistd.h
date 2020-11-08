#ifndef _UNISTD_H
#define _UNISTD_H

#include <sys/types.h>
#include <sys/fcntl.h>
#include <sys/time.h>
#include <sys/times.h>
#include <sys/stat.h>

#define	SEEK_SET	0
#define SEEK_CUR	1
#define SEEK_END	2

int close(int file);
int stat(const char *file, struct stat *st);
int getpid(void);
int isatty(int file);
int kill(int pid, int sig);
int link(char *old, char *new);
int lseek(int file, int ptr, int dir);
int open(const char *name, int flags, ...);
int read(int file, char *ptr, int len);
caddr_t sbrk(int incr);
int unlink(char *name);
int write(int file, char *ptr, int len);

#endif

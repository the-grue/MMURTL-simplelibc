/*
 * stdlib header for gcc for MMURTL
 */

#ifndef _STDLIB
#define _STDLIB

#define RAND_MAX	32767

extern unsigned int randomseed;
typedef unsigned int size_t;

void exit(int status);
int rand(void);
void srand(unsigned int seed);
int atoi(const char *s);
long int atol(const char *s);
void abort(void);
void *calloc(size_t nobj, size_t size);
void *malloc(size_t size);
void free(void *p);

#endif

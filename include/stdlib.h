/*
 * stdlib header for gcc for MMURTL
 */

#ifndef _STDLIB
#define _STDLIB

#define RAND_MAX	32767

extern unsigned int randomseed;
typedef unsigned int size_t;

typedef struct {
        int quot;
        int rem;
} div_t;

typedef struct {
        long quot;
        long rem;
} ldiv_t;

void exit(int status);
int rand(void);
void srand(unsigned int seed);
int atoi(const char *s);
long int atol(const char *s);
void abort(void);
void *calloc(size_t nobj, size_t size);
void *malloc(size_t size);
void free(void *p);
int abs(int n);
long int labs(long int n);
div_t div(int num, int denom);
ldiv_t ldiv(long int num, long int denom);

#endif

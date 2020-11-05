/*
 * stdlib header for gcc for MMURTL
 */

#ifndef _STDLIB
#define _STDLIB

#define RAND_MAX	32767

extern unsigned int randomseed;

void exit(int status);
int rand(void);
void srand(unsigned int seed);
int atoi(const char *s);
long int atol(const char *s);
void abort(void);

#endif

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

#endif

/*
 * string header file for gcc for MMURTL
 */

#ifndef _STRING
#define	_STRING

#ifndef _SIZE_T
#define _SIZE_T
typedef unsigned int size_t;
#endif

size_t strlen(const char* cs);
int strcmp(const char* cs, const char* ct);
int strncmp(const char* cs, const char* ct, int n);
char* strcpy(char* s, const char* ct);
char* strncpy(char* s, const char* ct, int n);
char* strcat(char* s, const char* ct);
char* strncat(char* s, const char* ct, int n);
char* strchr(const char* cs, int c);

#endif

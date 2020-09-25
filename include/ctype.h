/*
 * Character ID functions for gcc for the MMURTL OS
 *
 * The accepted range of character values is 0 to 127, and EOF.
 */

#ifndef _CTYPE
#define _CTYPE

int isalnum(int c);
int isalpha(int c);
int iscntrl(int c);
int isdigit(int c);
int isgraph(int c);
int islower(int c);
int isprint(int c);
int ispunct(int c);
int isspace(int c);
int isupper(int c);
int isxdigit(int c);
int tolower(int c);
int toupper(int c);

#endif

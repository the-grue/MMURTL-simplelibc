/*
 * string functions for gcc for MMURTL
 */

#include <string.h>

char* strcpy(char* s, const char* ct)
{
	char *ptr = s;

	while(*s++ = *ct++)
		;

	return ptr;
}

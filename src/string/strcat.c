/*
 * string functions for gcc for MMURTL
 */

#include <string.h>

char* strcat(char* s, const char* ct)
{
	char *ptr = s;

	while(*s++)
		;

	--s;
	while(*s++ = *ct++)
		;

	return ptr;
}

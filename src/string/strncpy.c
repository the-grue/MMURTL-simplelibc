/*
 * string functions for gcc for MMURTL
 */

#include <string.h>

char* strncpy(char* s, const char* ct, int n)
{
	char *ptr = s;

	n++;

	while((--n != 0) && ((*s++ = *ct++) != '\0'))
		;

	if(n != 0)
		while (--n != 0)
			*s++ = '\0';

	return ptr;
}

/*
 * string functions for gcc for MMURTL
 */

#include <string.h>

char* strncat(char* s, const char* ct, int n)
{
	char *ptr = s;

	n++;
	while(*s++)
		;

	--s;
	while(*s++ = *ct++)
		if(--n == 0)
		{
			s[-1] = '\0';
			break;
		}

	return ptr;
}

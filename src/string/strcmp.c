/*
 * string functions for gcc for MMURTL
 */

#include <string.h>

int strcmp(const char* cs, const char* ct)
{
	if(cs == ct)	/* Same pointer */
		return 0;

	while(*cs == *ct++)
		if(*cs++ == '\0')
			return 0;
	return (*cs - ct[-1]);
}

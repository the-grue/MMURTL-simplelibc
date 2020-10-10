/*
 * string functions for gcc for MMURTL
 */

#include <string.h>

int strncmp(const char* cs, const char* ct, int n)
{
	n++;
	if(cs == ct)	/* Same pointer */
		return 0;

	while((--n != 0) && (*cs == *ct++))
		if(*cs++ == '\0')
			return 0;
	return ((n == 0) ? 0 : (*cs - ct[-1]));
}

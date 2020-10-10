/*
 * string functions for gcc for MMURTL
 */

#include <string.h>

char* strchr(const char* cs, int c)
{
	do
	{
		if(*cs == c)
			return((char *)cs);
	} while(*cs++);

	return 0;
}

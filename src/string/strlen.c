/*
 * string functions for gcc for MMURTL
 */

#include <string.h>

size_t strlen(const char* cs)
{
	const char *ch;

	for(ch = cs; *ch != '\0'; ++ch)
		;

	return(ch - cs);
}

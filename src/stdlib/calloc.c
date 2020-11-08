#include <stdlib.h>
#include <stddef.h>

void *calloc(size_t nobj, size_t size)
{
	size_t counter = nobj * size;
	char *tmp = malloc(counter);
	char *ptr = tmp;

	while(counter--)
		*tmp++ = 0;

	return ptr;
}

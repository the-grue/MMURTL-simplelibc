#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

void *malloc(size_t size)
{
	return sbrk(size);	
}

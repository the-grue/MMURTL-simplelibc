#include <stdlib.h>

unsigned int randomseed = 1;

int rand(void)
{
	randomseed = randomseed * 1103515245 + 12345;
	return ((unsigned int) (randomseed >> 16) & RAND_MAX);
}

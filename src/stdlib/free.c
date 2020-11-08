#include <stdlib.h>

void free(void *p)
{
	/* Nothing to do since we aren't TRULY tracking
	 * malloc'd memory.  Yes, I know this wastes memory
	 * and can create memory leaks and will fix it later
	 * when I have time to write a better malloc.
	 */

	int x = 0;
}

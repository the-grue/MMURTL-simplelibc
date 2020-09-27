#include <stdio.h>

FILE _Files[FOPEN_MAX] = {0,1,2};

/*_Files[1].handle = 1;
_Files[2].handle = 2;*/

FILE *stdin = &_Files[1];
FILE *stdout = &_Files[2];
FILE *stderr = &_Files[2];

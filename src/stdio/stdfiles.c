#include <stdio.h>

FILE _stdin = {1};
FILE _stdout = {2};
FILE _stderr = {2};

FILE *stdin = &_stdin;
FILE *stdout = &_stdout;
FILE *stderr = &_stderr;

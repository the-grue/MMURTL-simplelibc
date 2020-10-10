#include <mmlib.h>

/*extern void main(int nParams, char *pParams[]);*/

/*asm ("call main\n");*/

extern void procparm(void);

asm ("call procparm\n");

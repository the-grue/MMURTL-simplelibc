/*
 * gcc library source for MMURTL
 */
#include <stdio.h>
#include <errno.h>
#include <mmlib.h>

/******** fgets *****************************************
  Read chars into string (s) until we get a LF or n-1=0.
  Null terminate the string.
**********************************************************/

char *fgets(char *s, int n, FILE *stream)
{
int  ch;
char  *ss, c;
	ss = s;
	while (n > 1)
	{
		ch = fgetc(stream);
		if (ch == EOF)
		{
			*s = 0;		/* null terminate */
			return(0);
		}
		else
		{
			c = ch;
			*s = c;
			n--;
			if (c == 0x0A)
				n = 0;
			s++;
		}
	}
	*s = 0;
	return (ss);
}

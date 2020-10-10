#include <stdarg.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

#define	S_SIZE	160


/*************************************************************
 This does the actual parsing of the format and also moves to
 the next arg(s) in the list from the passed in arg pointer.
 The number of chars written is returned (not incl \0).
**************************************************************/
long _formatout(char *outptr, char *fmt, va_list argptr)
{
char numstk[33], *ptr, justify, zero, minus, chr, us;
unsigned long width, value, i, total, *value2, *value3;

	total = 0;
	argptr -= 4;
	while(chr = *fmt++) {
		if(chr == '%') {			/* format code */
			chr = *fmt++;
            		ptr = &numstk[32];
			*ptr = justify = minus = 0;
			width = value = i = 0;
			zero = ' ';
			if(chr == '-')
			{				/* left justify */
				--justify;
				chr = *fmt++;
			}
			if(chr == '0')			/* leading zeros */
				zero = '0';
			while(isdigit(chr))
			{				/* field width specifier */
				width = (width * 10) + (chr - '0');
				chr = *fmt++;
			}
			/*asm ("int $3");*/
/*			value = (long) *++argptr;*/		/* get parameter value */
			/*argptr += 4;
			value = *argptr;*/	/* get parameter value */

			/* first switch allows for ld Ld ld ud Ud etc... */

			if(chr == 'U' || chr == 'u')
			{
				i = 10;
				us = 1;
				chr = *fmt++;
			}
			else if (chr == 'L' || chr == 'l')
			{
				chr = *fmt++;
			}
			else
				us = 0;

			if(chr == 'd')
			{
				i = 10;
				va_arg(argptr, char *);
				value = *argptr;
				if (!us)
					if(value & 0x80000000)
					{
						value = -value;
						++minus;
					}
			}
			else if(chr == 'X' || chr == 'x'){
				i = 16;
				va_arg(argptr, char *);
				value = *argptr;
			}
			else if(chr == 'o'){
				i = 8;
				va_arg(argptr, char *);
				value = *argptr;
			}
			else if(chr == 'b'){
				i = 2;
				va_arg(argptr, char *);
				value = *argptr;
			}
			else if(chr == 'c')
			{
				va_arg(argptr, char *);
				value = *argptr;
				*--ptr = value;
			}
			else if(chr == 's')
			{
				/*va_arg(argptr, char *);*/
				/*value3 = argptr;
				va_arg(value3, unsigned long *);
				va_arg(argptr, char *);*/
				/*asm ("int $3");*/
				/*value2 = (unsigned long *)*argptr;*/
				/*value2 = *value3;
				value = *value2;*/
				va_arg(argptr, char *);
				value = *((char **)argptr);
				ptr = *((char **)value);
			}
			else
			{
				*--ptr = chr;
	/*			++argptr;	
				argptr += 4; */
				va_arg(argptr, char *);
				
			}

			if(i)		/* for all numbers, generate the ASCII string */
				do {
					if((chr = (value % i) + '0') > '9')
						chr += 7;
					*--ptr = chr; }
				while(value /= i);

			/* output sign if any */

			if(minus)
			{
				*outptr++ = '-';
				++total;
				if(width)
					--width;
			}

			/* pad with 'zero' value if right justify enabled  */

			if(width && !justify) {
				for(i = strlen(ptr); i < width; ++i)
					*outptr++ = zero;
					++total;
				}

			/* move in data */

			i = 0;
			value = width - 1;

			while((*ptr) && (i <= value)) {
				*outptr++ = *ptr++;
				++total;
				++i; }
			/* pad with 'zero' value if left justify enabled */

			if(width && justify) {
				while(i < width) {
					*outptr++ = zero;
					++total;
					++i;
					}
				}
			}
		else {
			/* not format char, just move into string  */
			*outptr++ = chr;
			++total;
			}
		}

	*outptr = 0;
	return total;
}

/************************************
    Formatted print to stdout
*************************************/

int printf(char *fmt, ...)
{
	va_list ap;
	long total;
	char buffer[S_SIZE];

	va_start(ap, fmt);		/* set up ap pointer */
	total = _formatout(buffer, fmt, ap);
	fputs(buffer, stdout);
	va_end(ap);
	return total;
}

/************************************
    Formatted print to string s
*************************************/

int sprintf(char *s, char *fmt, ...)
{
	va_list ap;
	long total;

	va_start(ap, fmt);			/* set up ap pointer */
	total = _formatout(s, fmt, ap);
	va_end(ap);
	return total;
}

/************************************
    Formatted print to a file
*************************************/

int fprintf(FILE *stream, char *fmt, ...)
{
	va_list ap;
	long total;
	char buffer[S_SIZE];

	va_start(ap, fmt);		/* set up ap pointer */
	total = _formatout(buffer, fmt, ap);
	if (fputs(buffer, stream)==EOF) total = -1;
	va_end(ap);
	return total;
}

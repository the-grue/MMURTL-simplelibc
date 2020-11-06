#include <ctype.h>
#include <stdlib.h>

int atoi(const char *s)
{
    int sign, n;
    
    while (isspace(*s))
        ++s;
    
    sign = 1;
    
    switch(*s)
    {
        case '-':
            sign = -1;
        case '+':
            ++s;
	default:
            break;
    }
    
    n = 0;
    while (isdigit(*s))
        n = 10 * n + (*s++ - '0');
    
    return (sign * n);
}

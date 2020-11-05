#include <ctype.h>
#include <stdlib.h>

long int atol(const char *s)
{
    long int sign, n;
    
    while (isspace(*s))
        ++s;
    
    sign = 1;
    
    switch (*s)
    {
        case '-':
            sign = -1;
        case '+':
        default:
            ++s;
            break;
    }
    
    n = 0;
    
    while (isdigit(*s))
        n = 10 * n + *s++ - '0';
    
    return (sign * n);
}

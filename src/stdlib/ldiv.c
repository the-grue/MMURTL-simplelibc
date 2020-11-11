#include <stdlib.h>

ldiv_t ldiv(long int numerator, long int denominator)
{
	ldiv_t value;

        if (numerator >= 0 && denominator < 0)
	{
                numerator = -numerator;
                value.quot = -(numerator / denominator);
                value.rem  = -(numerator % denominator);
        } 
	else if (numerator < 0 && denominator > 0) 
	{
                denominator = -denominator;
                value.quot = -(numerator / denominator);
                value.rem  = numerator % denominator;
        } 
	else
	{
                value.quot = numerator / denominator;
                value.rem  = numerator % denominator;
        }

        return value;
}

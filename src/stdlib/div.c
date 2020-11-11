#include <stdlib.h>

div_t div(int numerator, int denominator)
{
	div_t value;

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

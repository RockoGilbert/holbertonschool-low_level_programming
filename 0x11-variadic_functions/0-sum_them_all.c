#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - gets sum of variadic function
 * @n: num of args
 * Return:int
 */

int sum_them_all(const unsigned int n, ...)
{

unsigned int j;

va_list ap;
int sum = 0;

va_start(ap, n);

if (n == 0)
	return (0);

for (j = 0; j < n; j++)
	sum += va_arg(ap, int);

va_end(ap);
return (sum);

}

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: number of parameters passed to the function
 * Return: 0 if n is 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	int sum;
	va_list args;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}


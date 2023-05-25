#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @n: numbers of arguments
 * @separator: Separator
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list args;

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(args, unsigned int));

		if (separator != NULL && count != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

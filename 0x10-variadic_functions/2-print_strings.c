#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print strings, followed by a new line.
 * @n: the number of strings passed to function
 * @separator: separator
 * @... a variable number of strings to be passed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int count;
	va_list args;

	va_start(args, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && count != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}

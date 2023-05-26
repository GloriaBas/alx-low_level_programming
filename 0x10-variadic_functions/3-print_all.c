#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: List of types of argument passed to the function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	char *str;
	char *sep;
	unsigned int count;
	va_list args;

	va_start(args, format);

	count = 0;
	sep = "";

	while (format  && format[count])
	{
		switch (format[count])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				count++;
				continue;
		}
		sep = ", ";
		count++;
	}
	printf("\n");
	va_end(args);
}



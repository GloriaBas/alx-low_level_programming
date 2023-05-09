#include "main.h"


/**
 * print_number - A function that prints an integer.
 * @n: parameter
 */

void print_number(int n)
{
	unsigned int result;

	if (n < 0)
	{
		_putchar('-');
		result = -n;
	}
	else
	{
		result = n;
	}
	if (result / 10)
	{
		print_number(result / 10);
	}
	_putchar((result % 10) + '0');
}

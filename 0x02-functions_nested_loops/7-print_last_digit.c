#include "main.h"

/**
 * print_last_digit - A function that prints the
 * last digit of a number
 * @x: parameter
 * Return: the value of the last digit
 */

int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		y = -1 * (x % 10);
		_putchar(y + '0');
		return (y);
	}
	else
	{
		y = x % 10;
		_putchar(y + '0');
		return (y);
	}
}

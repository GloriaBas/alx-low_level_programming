#include "main.h"
#include <string.h>

/**
 * print_rev - A function that prints a string, in reverse, followed by
 * a new line.
 * @s: parameter
 * Return: nothing
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - A function that prints a string, followed by new line, to stdout.
 * @str: parameter
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

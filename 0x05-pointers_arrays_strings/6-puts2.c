#include "main.h"
#include <string.h>

/**
 * puts2 - A function that prints every other character of a string, starting
 * with the first character, followed a new line.
 * @str: parameter
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
}

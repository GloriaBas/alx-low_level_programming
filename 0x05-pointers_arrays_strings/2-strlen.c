#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: parameter
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

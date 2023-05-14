#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: pointer
 * @b: value to copy
 * @n: size of value
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		*(s + i) = b;
	}
	return (s);
}

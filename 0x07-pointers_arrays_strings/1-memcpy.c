#include "main.h"

/**
 * _memcpy - A function that copie memory area.
 * @dest: destination
 * @src: source
 * @n: size of memory to be copied
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p1 = src;
	char *p2 = dest;

	while (n--)
	{
		*p2++ = *p1++;
	}
	return (dest);
}

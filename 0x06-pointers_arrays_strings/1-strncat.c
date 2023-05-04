#include "main.h"
#include <string.h>

/**
 * _strncat - A function that copies a string.
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *z = dest + strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		z[i] = src[i];
	}
	z[i] = '\0';
	return (dest);
}

#include <string.h>
#include "main.h"

/**
 * _strcpy - A function that copies the string pointed to by src,
 * including the terminating null byte (\0), to buffer pointed to by dest.
 * @dest: parameter
 * @src: parameter
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	j = strlen(src);
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

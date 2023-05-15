#include "main.h"
#include <string.h>

/**
 * _strcat - A function that concatenates two strings.
 * @dest: parameter
 * @src: parameter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *z = dest + strlen(dest);

	while (*src != '\0')
	{
		*z++ = *src++;
	}
	*z = '\0';
	return (dest);
}

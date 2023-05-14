#include "main.h"
#include <string.h>

/**
 * _strcmp - A function that compares two strings.
 * @s1: parameter
 * @s2: parameter
 * Return: positive, negative or zero
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

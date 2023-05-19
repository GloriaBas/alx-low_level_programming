#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x;
	char *str;
	unsigned int y, len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	
	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		str[x] = s1[x];
	for (y =0; y < n; y++)
		str[x + y] = s2[y];
	str[x + y] = '\0';

	return (str);
}

#include <stdlib.h>
#include "main.h"
/**
 * lenght - Calculates the lenght of a string
 * @s1: string
 * Return: lenght
 */

unsigned int lenght(char *s1)
{
	unsigned int x;

	if (s1 == NULL)
		return (0);
	for (x = 0; s1[x] != '\0'; x++)
	{}

	return (x);
}

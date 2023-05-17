#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - A function that concatenates two strings.
 *@s1: first string to concatenates
 *@s2: second string to concatenates
 *Return: Return to the new string created (Success) or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int x, y, z, limit;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	s3 = malloc(sizeof(char) * (x + y + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (z = 0; z < x; z++)
		s3[z] = s1[z];

	limit = y;
	for (y = 0; y <= limit; z++, y++)
		s3[z] = s2[y];
	return (s3);
}

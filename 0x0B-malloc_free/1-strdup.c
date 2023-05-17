#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - A function that returns a pointer to newly allocated memory
 * space, that contains a cpoy of the string.
 * @str: string parameter
 * Return: Always 0
 */

char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	copy = (char *)malloc(strlen(str) + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	strcpy(copy, str);
	return (copy);
}

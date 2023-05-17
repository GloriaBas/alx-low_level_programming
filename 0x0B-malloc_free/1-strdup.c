#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated memory
 * space that contains a duplicate of the string.
 * @str: string parameter
 * Return: a pointer (success), NULL (error)
 */

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}


	return (duplicate);
}

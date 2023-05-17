#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - A function that creates an array of chars,
 * and initialize it with a specific char.
 * @c: character to be initialized
 * @size: size of array
 * Return: a pointer to the array of NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int k;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k < size; k++)
			arr[k] = c;
	}
	return (arr);
}

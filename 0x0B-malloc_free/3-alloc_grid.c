#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: parameter
 * @height:parameter
 * Return: pointer to the created matrix (success)
 * or NULL
 */

int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*arr) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(sizeof(**arr) * width);
		if (arr[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(arr[x]);
			free(arr);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}
	return (arr);
}


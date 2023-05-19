#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @max: maximum value(excluded)
 * @min: minimum value
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int num;
	int k;
	int *arr;

	if (min > max)
		return (NULL);

	num = max - min + 1;

	arr = malloc(sizeof(int) * num);
	if (arr == NULL)
		return (NULL);

	for (k = 0; k < num; k++)
		arr[k] = min + k;

	return (arr);
}

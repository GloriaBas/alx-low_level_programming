#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;
	int square;

	i = 0;
	sum1 = 0;
	sum2 = 0;
	square = size * size;
	while (i < square)
	{
		if (i % (size + 1) == 0)
			sum1 = sum1 + a[i];
		if (i % (size - 1) == 0 && i != (square - 1) && i != 0)
			sum2 = sum2 + a[i];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}

#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: 1st parameter
 * @b: 2nd parameter
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

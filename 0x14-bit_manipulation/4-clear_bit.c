#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 * Return: 1 if it worked, -1 if it fails.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;

	if (*n & k)
		*n ^= k;
	return (1);
}

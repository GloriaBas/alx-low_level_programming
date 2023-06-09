#include <stdio.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * Return: 1 if it worked, or -1 if fails.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;
	*n = (*n | k);

	return (1);
}

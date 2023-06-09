#include <stdio.h>
#include "main.h"


/**
 * binary_to_uint - Converts binary to an unsigned int.
 * @b: string containing the binary number
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int result;

	result = 0;

	if (!b)
		return (0);

	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
		{
			return (0);
		}
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		result <<= 1;
		if (b[k] == '1')
			result += 1;
	}
	return (result);
}


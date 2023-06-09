#include  <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness of a machine
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	char *c;
	unsigned int k;

	k = 1;
	c = (char *) &k;

	return ((int)*c);
}

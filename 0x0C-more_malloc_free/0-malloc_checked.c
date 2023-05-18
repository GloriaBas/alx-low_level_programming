#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - A function that allocated memory using malloc.
 * @b: number of bytes to allocates
 * Return: pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

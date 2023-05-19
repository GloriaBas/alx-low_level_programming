#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: previous pointer to the memory
 * @new_size: size of new pointer
 * @old_size: size of pointer
 * Return: pointer to new allocated space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *char_ptr;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	char_ptr = ptr;

	new_ptr = malloc(sizeof(char) * new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (k = 0; k < old_size; k++)
			new_ptr[k] = char_ptr[k];
	}
	free(ptr);
	return (new_ptr);
}

#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t lenght;

	lenght = 0;
	while (h != NULL)
	{
		h = h->next;
		lenght++;
	}
	return (lenght);
}

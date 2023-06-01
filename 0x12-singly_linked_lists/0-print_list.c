#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: pointer to the list_t list to print
 * Return: number of elements printed
 */

size_t print_list(const list_t *h)
{
	size_t lenght;

	lenght = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		lenght++;
	}

	return (lenght);
}

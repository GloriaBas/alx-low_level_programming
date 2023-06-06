#include "lists.h"

/**
 * print_listint - Prints all the elements of a list.
 * @h: linked list of type list_int to print
 *
 * Return: numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t len = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		len += 1;
		temp = temp->next;
	}
	return (len);
}

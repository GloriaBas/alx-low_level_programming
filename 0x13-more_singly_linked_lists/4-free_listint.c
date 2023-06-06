#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: listint_t list to be freed
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

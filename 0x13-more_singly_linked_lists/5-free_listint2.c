#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Frees a list by setting the head to NULL
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	head = NULL;
}

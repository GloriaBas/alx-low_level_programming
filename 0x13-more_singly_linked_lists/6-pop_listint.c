#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete the head node of a list and returns
 * the node's data
 * @head: pointer to the element in the linked list
 * Return:node's data or 0
 */

int pop_listint(listint_t **head)
{
	int result;
	listint_t *current;

	current = *head;

	if (current == NULL)
		return (0);

	*head = current->next;
	result = current->n;
	free(current);

	return (result);
}


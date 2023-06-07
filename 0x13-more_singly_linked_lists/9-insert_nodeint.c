#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked list
 * @head: pointer to the first node in the list
 * @idx: index
 * @n: data to insert in the new node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int count;

	current = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current;
		*head = new_node;
		return (new_node);
	}

	for (count = 0; count < (idx - 1); count++)
	{
		if (current == NULL || current->next == NULL)
			return (NULL);
		current = current->next;
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

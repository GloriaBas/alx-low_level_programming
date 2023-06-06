#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index && head != NULL; count++)
	{
		head = head->next;
	}

	return (head);

}

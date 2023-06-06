#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end -  Adds a new node at the end of a list
 * @head: pointer to the first element in the list
 * @n: integer
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}

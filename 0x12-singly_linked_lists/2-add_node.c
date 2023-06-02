#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node at beginning of the linked list
 * @head: double pointer to the list_t list
 * @str: string to store in the list
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t lenght;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (lenght = 0; str[lenght]; lenght++)
		;

	new->len = lenght;
	new->next = *head;
	*head = new;

	return (*head);
}

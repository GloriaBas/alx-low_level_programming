#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Frees a list linked list
 * @head: Beginning of the list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}

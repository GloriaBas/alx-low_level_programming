#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data(n) of a linked list
 * @head: first node in the linked list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

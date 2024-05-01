#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: A pointer to the first node of the list.
 *
 * Return: The sum of all the data (n), or 0 if empty.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	for (node = head; node != NULL; node = node->next)
		sum += node->n;

	return (sum);
}


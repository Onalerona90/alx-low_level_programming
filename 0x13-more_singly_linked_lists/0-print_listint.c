#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current_node;

	for (current_node = h; current_node != NULL;
		current_node = current_node->next)
	{
		printf("%d\n", current_node->n);
		count++;
	}

	return (count);
}


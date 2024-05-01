#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the first node of the list.
 * @index: index of the node to retrieve, starting at 0.
 *
 * Return: A pointer to the nth node, or NULL if it does not exist.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i;

	for (i = 0; node != NULL && i < index; i++)
		node = node->next;

	return (node);
}


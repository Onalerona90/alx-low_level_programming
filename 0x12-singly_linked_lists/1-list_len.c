#include <stdio.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of a linked list.
 *
 * Return: The number of elements in a linked list_t list.
*/

size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next)
		count++;

	return (count);
}


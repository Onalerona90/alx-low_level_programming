#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The pointer to the list_t list.
 *
 * Return: The number of nodes.
*/

size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
	}

	return (count);
}


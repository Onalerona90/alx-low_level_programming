#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer that points to the first node of the list.
*/

void free_list(list_t *head)
{
	list_t *current_node;

	for (current_node = head; current_node != NULL; current_node = head)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}


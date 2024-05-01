#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Sets the head to NULL.
 * @head: A pointer to the first node of the list.
*/

void free_listint2(listint_t **head)
{
	listint_t *current_node, *next;

	if (head == NULL)
		return;

	for (current_node = *head; current_node != NULL; current_node = next)
	{
		next = current_node->next;
		free(current_node);
	}

	*head = NULL;
}


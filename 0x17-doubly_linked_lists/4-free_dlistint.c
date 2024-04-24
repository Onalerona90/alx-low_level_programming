#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the list.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp = NULL;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}

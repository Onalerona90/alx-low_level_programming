#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	prev = NULL;
	current_node = *head;

	for (i = 0; current_node != NULL && i < index; i++)
	{
		prev = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (-1);

	prev->next = current_node->next;
	free(current_node);

	return (1);
}


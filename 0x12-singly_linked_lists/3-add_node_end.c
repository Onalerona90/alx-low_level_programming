#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer that points to the first node of the list.
 * @str: The string to be duplicated.
 *
 * Return: The address of the new node, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t len;
	int i;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; new_node->str[len]; len++)
		;

	new_node->len = len;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	for (i = 0; temp->next; i++)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}


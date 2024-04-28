#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer that points to the first node of the list.
 * @str: The string to be duplicated.
 *
 * Return: The address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;
	const char *s = str;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	for (i = 0; s[i]; i++)
		;

	new_node->len = i;
	new_node->str = malloc(sizeof(char) * (i + 1));

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		new_node->str[i] = str[i];

	new_node->str[i] = '\0';
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}


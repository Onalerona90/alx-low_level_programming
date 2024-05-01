#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list, or
 * exit the program with status 98 if the function fails.
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *runner;
	size_t current_index, runner_index;

	current = head;
	current_index = 0;

	while (current != NULL)
	{
		runner = head;
		for (runner_index = 0; runner_index < current_index; runner_index++)
		{
			if (runner == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (current_index);
			}

			runner = runner->next;
		}
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		current_index++;
	}

	return (current_index);
}


#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list.
 * @list: Pointer to the head of the skip list to search in.
 * @value: Value to search for.
 *
 * Return: A pointer to the first node where the value is located or,
 * NULL if the value is not present in the list or if head is NULL.
*/

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list, *jump;

	if (list == NULL)
		return (NULL);

	while (node->express && node->express->n < value)
	{
		jump = node->express;
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
		node = jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	node->index, node->express->index);

	while (node->index < node->express->index && node->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		node = node->next;
	}

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}

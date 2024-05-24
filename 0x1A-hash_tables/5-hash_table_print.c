#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Description: Prints the key/value pairs in the order that they appear
 * in the array of the hash table, in the format: '{'key': 'value', ...}'
 * If ht is NULL, don’t print anything
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}

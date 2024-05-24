#include "hash_tables.h"

/**
 * create_shash_node - Creates a new sorted hash node
 * @key: The key
 * @value: The value
 *
 * Return: A pointer to the created node, or NULL on failure
*/

shash_node_t *create_shash_node(const char *key, const char *value)
{
    shash_node_t *new_node;

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return NULL;

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return NULL;
    }
    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return NULL;
    }
    new_node->next = NULL;
    new_node->sprev = NULL;
    new_node->snext = NULL;

    return new_node;
}

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the created sorted hash table, or NULL on failure
*/

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }
    for (i = 0; i < size; i++)
        ht->array[i] = NULL;
    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * hash_table_set - Adds an element to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * @value: The value
 *
 * Return: 1 if succeeded, 0 otherwise
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node, *current;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    current = ht->array[index];
    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            return (current->value != NULL);
        }
        current = current->next;
    }

    new_node = create_shash_node(key, value);
    if (new_node == NULL)
        return (0);

    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    insert_sorted_list(ht, new_node);

    return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: The sorted hash table
 * @key: The key
 *
 * Return: The value associated with the element, or NULL if key couldn’t be found
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *node;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    node = ht->array[index];
    while (node)
    {
        if (strcmp(node->key, key) == 0)
            return node->value;
        node = node->next;
    }

    return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The sorted hash table
*/

void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;
    int first = 1;

    if (ht == NULL)
        return;

    printf("{");
    node = ht->shead;
    while (node)
    {
        if (!first)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        first = 0;
        node = node->snext;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse
 * @ht: The sorted hash table
*/

void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *node;
    int first = 1;

    if (ht == NULL)
        return;

    printf("{");
    node = ht->stail;
    while (node)
    {
        if (!first)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        first = 0;
        node = node->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table to delete
*/

void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *node, *tmp;

    if (ht == NULL)
        return;

    node = ht->shead;
    while (node)
    {
        tmp = node;
        node = node->snext;
        free(tmp->key);
        free(tmp->value);
        free(tmp);
    }
    free(ht->array);
    free(ht);
}

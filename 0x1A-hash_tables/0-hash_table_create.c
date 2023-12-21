#include "hash_tables.h"

/**
 * hash_table_create - creates hash table.
 * @size: the size of array.
 * Return: on success return pointer to a new hash table otherwise NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int idx;

	hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table)
		return (NULL);

	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (idx = 0; idx < size; idx++)
	{
		hash_table->array[idx] = NULL;
	}
	hash_table->size = size;
	return (hash_table);
}

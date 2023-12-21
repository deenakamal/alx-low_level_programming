#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: the hash table.
 * @key: the key.
 *
 * Return: the value associated with the element,
 *         or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *current_;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	if (!ht->array[index])
		return (NULL);

	current_ = ht->array[index];
	while (current_)
	{
		if (!strcmp(current_->key, key))
			return (current_->value);

		current_ = current_->next;
	}

	return (NULL);
}

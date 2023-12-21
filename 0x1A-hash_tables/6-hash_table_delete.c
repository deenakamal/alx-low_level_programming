#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table.
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current_, *tmp;

	for (index = 0; index < ht->size; index++)
	{
		current_ = ht->array[index];

		while (current_)
		{
			tmp = current_->next;
			free(current_->key);
			free(current_->value);
			free(current_);
			current_ = tmp;
		}
	}

	free(ht->array);
	free(ht);
}

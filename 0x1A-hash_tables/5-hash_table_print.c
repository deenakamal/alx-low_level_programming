#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: the hash table.
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long index;
	hash_node_t *current_;
	int flag = 0;

	if (!ht)
		return;

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		current_ = ht->array[index];

		while (current_)
		{
			if (flag == 1)
			{
				printf(", ");
			}

			printf("'%s': '%s'", current_->key, current_->value);
			current_ = current_->next;
			flag = 1;
		}
	}
	printf("}\n");
}

#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table to delete
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				temp = ht->array[i];

				free(temp->key);
				free(temp->value);
				free(temp);
				ht->array[i] = ht->array[i]->next;
			}
		}
	}
	free(ht->array);
	free(ht);
}

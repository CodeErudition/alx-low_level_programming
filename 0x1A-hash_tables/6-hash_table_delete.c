#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table
 *
 * @ht: The hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *Hnode, *tempH;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		Hnode = ht->array[i];
		while (Hnode != NULL)
		{
			tempH = Hnode->next;
			free(Hnode->key);
			free(Hnode->value);
			free(Hnode);
			Hnode = tempH;
		}
	}
	free(ht->array);
	free(ht);
}

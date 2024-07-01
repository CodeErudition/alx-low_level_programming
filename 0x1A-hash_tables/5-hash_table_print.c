#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table.
 *
 * @ht: The hash table to print
 *
 * Description: Print the key/value pairs in the order they appear
 *		in the array, and within the lists, in the order they appear.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *Hnode;
	int start = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		Hnode = ht->array[i];
		while (Hnode != NULL)
		{
			if (!start)
				printf(", ");
			printf("'%s': '%s'", Hnode->key, Hnode->value);
			start = 0;
			Hnode = Hnode->next;
		}
	}
	printf("}\n");
}

#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated
 *			with a key.
 *
 * @ht: The hash table you want to look into
 * @key: The key you are looking for
 *
 * Return: The value associated with the element, or NULL if key
 *		couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *Hnode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	Hnode = ht->array[index];

	while (Hnode != NULL)
	{
		if (strcmp(Hnode->key, key) == 0)
			return (Hnode->value);
		Hnode = Hnode->next;
	}

	return (NULL);
}

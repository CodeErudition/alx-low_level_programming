#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table.
 *
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key. key cannot be an empty string
 * @value: The value associated with the key. value must be duplicated.
 *          value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value);
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_Hnode, *current_Hnode;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_Hnode = ht->array[index];

	while (current_Hnode)
	{
		if (strcmp(current_Hnode->key, key) == 0)
		{
			free(current_Hnode->value);
			current_Hnode->value = strdup(value);
			if (current_Hnode->value == NULL)
				return (0);
			return (1);
		}
		current_Hnode = current_Hnode->next;
	}

	new_Hnode = malloc(sizeof(hash_node_t));
	if (new_Hnode == NULL)
		return (0);

	new_Hnode->key = strdup(key);
	if (new_Hnode->key == NULL)
	{
		free(new_Hnode);
		return (0);
	}

	new_Hnode->value = strdup(value);
	if (new_Hnode->value == NULL)
	{
		free(new_Hnode->key);
		free(new_Hnode);
		return (0);
	}

	new_Hnode->next = ht->array[index];
	ht->array[index] = new_Hnode;

	return (1);
}

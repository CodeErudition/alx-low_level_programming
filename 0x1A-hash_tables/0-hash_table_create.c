#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table.
 *
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table
 *         NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_Htable;
	unsigned long int i;

	new_Htable = malloc(sizeof(hash_table_t));
	if (new_Htable == NULL)
		return (NULL);

	new_Htable->size = size;

	new_Htable->array = malloc(sizeof(hash_node_t *) * size);
	if (new_Htable->array == NULL)
	{
		free(new_Htable);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_Htable->array[i] = NULL;
	}

	return (new_Htable);
}

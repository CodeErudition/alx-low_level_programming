#include "hash_tables.h"

/**
 * shash_table_create - A fuction that reates a sorted hash table.
 *
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table,
 *		or NULL if it fails
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}


/**
 * shash_table_set - A funtion that adds an element to the sorted
 *			hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key, cannot be an empty string
 * @value: The value associated with the key, must be duplicated, can
 *		be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value);
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_SHnode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_SHnode = malloc(sizeof(shash_node_t));

	if (new_SHnode == NULL)
		return (0);

	new_SHnode->key = strdup(key);
	new_SHnode->value = strdup(value);
	new_SHnode->next = NULL;
	new_SHnode->sprev = NULL;
	new_SHnode->snext = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_SHnode;
	}
	else
	{
		new_SHnode->next = ht->array[index];
		ht->array[index] = new_SHnode;
	}

	if (ht->shead == NULL)
	{
		ht->shead = new_SHnode;
		ht->stail = new_SHnode;
	}
	else
	{
		shash_node_t *current = ht->shead;

		while (current && strcmp(current->key, key) < 0)
		{
			current = current->snext;
		}
		if (current == ht->shead)
		{
			new_SHnode->snext = ht->shead;
			ht->shead->sprev = new_SHnode;
			ht->shead = new_SHnode;
		}
		else if (current == NULL)
		{
			ht->stail->snext = new_SHnode;
			new_SHnode->sprev = ht->stail;
			ht->stail = new_SHnode;
		}
		else
		{
			new_SHnode->snext = current;
			new_SHnode->sprev = current->sprev;
			current->sprev->snext = new_SHnode;
			current->sprev = new_SHnode;
		}
	}

	return (1);
}

/**
 * shash_table_get - A function tha retrieves a value associated
 *			with a key
 *
 * @ht: The hash table to look into
 * @key: The key to look for
 *
 * Return: The value associated with the element, or NULL if key
 *		couldn't be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *SHnode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	
	index = key_index((const unsigned char *)key, ht->size);
	SHnode = ht->array[index];

	while (SHnode != NULL)
	{
		if (strcmp(SHnode->key, key) == 0)
			return (SHnode->value);
		SHnode = SHnode->next;
	}

	return (NULL);
}

/**
 * shash_table_print - A function that Prints a sorted hash table
 *
 * @ht: The hash table to print
 *
 * Format: key/value in the order they appear in the sorted linked list
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *SHnode;
	int start = 1;

	if (ht == NULL)
		return;

	SHnode = ht->shead;

	printf("{");
	while (SHnode != NULL)
	{
		if (!start)
			printf(", ");
		printf("'%s': '%s'", SHnode->key, SHnode->value);
		start = 0;
		SHnode = SHnode->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - A function that Prints a sorted hash table
 *				in reverse
 * @ht: The hash table to print
 *
 * Format: key/value in reverse order they appear in the sorted linked list
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *SHnode;
	int start = 1;

	if (ht == NULL)
		return;

	SHnode = ht->stail;

	printf("{");
	while (SHnode != NULL)
	{
		if (!start)
			printf(", ");
		printf("'%s': '%s'", SHnode->key, SHnode->value);
		start = 0;
		SHnode = SHnode->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - A function that eletes a sorted hash table
 *
 * @ht: The hash table to delete
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *SHnode;
	shash_node_t *tempSH;

	if (ht == NULL)
		return;

	SHnode = ht->shead;

	while (SHnode != NULL)
	{
		tempSH = SHnode->snext;
		free(SHnode->key);
		free(SHnode->value);
		free(SHnode);
		SHnode = tempSH;
	}

	free(ht->array);
	free(ht);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: Non-negative int holding the size of the array.
 * @c: Character to be initialized.
 *
 * Return: If memory allocation is successful, returns a pointer to the
 * dynamically allocated array. If size is 0 or memory allocation fails,
 * returns NULL.
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *char_arr;

	if (size == 0)
	{
		return (NULL);
	}
	char_arr = (char *)malloc(size * sizeof(char));
	if (char_arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		char_arr[i] = c;
	}
	return (char_arr);
}

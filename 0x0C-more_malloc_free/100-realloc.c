#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block.
 *
 * @ptr: Pointer to the previously allocated memory block.
 * @old_size: Size of the old memory block in bytes.
 * @new_size: Size of the new memory block in bytes.
 *
 * Return: Pointer to the newly allocated memory block, else NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *_realloc_ptr;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size <= old_size)
	{
		return (ptr);
	}
	_realloc_ptr = malloc(new_size);
	if (_realloc_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		((char *)_realloc_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (_realloc_ptr);
}

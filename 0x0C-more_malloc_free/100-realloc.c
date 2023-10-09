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
	char *_realloc_ptr;
	size_t i;

	if (ptr == NULL)
	{
		_realloc_ptr = malloc(new_size);
		return (_realloc_ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	_realloc_ptr = malloc(new_size);
	if (_realloc_ptr == NULL)
	{
		return (NULL);
	}
	else if (new_size > old_size)
	{
		new_size = old_size;
	}
	for (i = 0; i < new_size; i++)
	{
		_realloc_ptr[i] = ptr[i];
	}
	free(ptr);
	return (_realloc_ptr);
}

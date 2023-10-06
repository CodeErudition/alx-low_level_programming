#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function thay allocates memory for an array.
 *
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 *
 * Return: A pointer to the allocated memory, else  NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *_arr_ptr;
	char *_byte_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	_arr_ptr = malloc(nmemb * size);
	if (_arr_ptr == NULL)
	{
		return (NULL);
	}
	_byte_ptr = (char *)_arr_ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		_byte_ptr[i] = 0;
	}
	return (_arr_ptr);
}

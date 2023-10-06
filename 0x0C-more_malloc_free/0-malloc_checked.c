#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc and checks
 * for failure.
 *
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory if successful, else it terminates
 * the program with status 98.
 */

void *malloc_checked(unsigned int b)
{
	void *_mem_ptr;

	_mem_ptr = malloc(b);
	if (_mem_ptr == NULL)
	{
		exit(98);
	}
	return (_mem_ptr);
}

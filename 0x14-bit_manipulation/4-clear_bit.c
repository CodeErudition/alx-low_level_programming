#include "main.h"

/**
 * clear_bit - A function that set 0 at a given index.
 *
 * @n: The unsigned long int to change it's bit value at an index.
 * @index: index is the index, starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	Ulint checker;

	if (index >= sizeof(Ulint) * 8)
	{
		return (-1);
	}
	checker = ~(1 << index);
	*n = *n & checker;
	return (1);
}

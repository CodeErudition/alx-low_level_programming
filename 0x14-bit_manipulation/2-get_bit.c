#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 *
 * @n: The unsigned long int value to be checked
 * @index: Index of the unsigned long int value to be checked.
 *
 * Return: The value of bit at an index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	Ulint checker;

	if (index >= sizeof(Ulint) * 8)
	{
		return (-1);
	}
	checker = 1 << index;
	return (n & checker ? 1 : 0);
}

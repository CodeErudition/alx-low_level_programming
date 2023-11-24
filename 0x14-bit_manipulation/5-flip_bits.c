#include "main.h"

/**
 * flip_bits - A function that returns the number of bits to flip from
 * one number to another.
 *
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits that need to be flipped to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	Ulint bit_num;
	Uint bit_count = 0;

	for (bit_num = n ^ m; bit_num > 0; bit_num >>= 1)
	{
		bit_count += bit_num & 1;
	}
	return (bit_count);
}

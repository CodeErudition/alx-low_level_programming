#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * to an unsigned int.
 *
 * @b: A pointer to the binary value to be converted.
 *
 * Return: Unsigned int equivalent of binary value.
 */

unsigned int binary_to_uint(const char *b)
{
	Uint uint_value = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			uint_value = (uint_value << 1) + (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (uint_value);
}


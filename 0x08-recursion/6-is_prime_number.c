#include "main.h"

/**
 * is_prime_number - A function that checks if a given integer
 * is a prime number.
 * @n: The integer to be checked for primality.
 *
 * Return: 1 if 'n' is a prime number, 0 if it's not.
 */

int is_prime_number(int n)
{
	int count;

	if (n <= 1)
	{
		return (0);
	}
	for (count = 2; count * count <= n; count++)
	{
		if (n % count == 0)
		{
			return (0);
		}
	}
	return (1);
}

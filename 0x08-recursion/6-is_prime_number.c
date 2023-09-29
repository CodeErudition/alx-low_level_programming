#include "main.h"

int is_prime(int n, int denominator);
/**
 * is_prime - A helper function to check if a number is prime.
 * @n: The integer to be checked for primality.
 * @denominator: The current divisor being tested.
 *
 * Return: 1 if 'n' is a prime number, 0 if it's not.
 */
int is_prime(int n, int denominator)
{
	if (n <= 1)
	{
		return (0);
	}

	if (denominator == 1)
	{
		return (1);
	}

	if (n % denominator == 0)
	{
		return (0);
	}
	return (is_prime(n, denominator - 1));
}

/**
 * is_prime_number - A function that checks if a given integer is a
 * prime number.
 * @n: The integer to be checked for primality.
 *
 * Return: 1 if 'n' is a prime number, 0 if it's not.
 */
int is_prime_number(int n)
{
	return (is_prime(n, n - 1));
}

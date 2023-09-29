#include "main.h"

int dummy_sqrt(int num, int trial);

/**
 * dummy_sqrt - A recursive function that attempts to find the
 * square root of a number using trial and error.
 * @num: The number for which the square root is sought.
 * @trial: The current trial value to test for the square root.
 *
 * Return: If a whole number square root is found, return the square root.
 * If no whole number square root is found within the
 * range [1, num/2], return -1.
 */

int dummy_sqrt(int num, int trial)
{
	if  (trial * trial == num)
	{
		return (trial);
	}
	if (trial == num / 2)
	{
		return (-1);
	}
	return (dummy_sqrt(num, trial + 1));
}

/**
 * _sqrt_recursion - A function that returns the natural
 * square root of a number
 * @n: Number
 * Return: If the input is negative, return -1.
 * Otherwise, return the natural square root of the input integer
 * using recursive search.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (dummy_sqrt(n, 1));
}

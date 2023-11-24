#include "main.h"

/**
 * print_binary - A function that prints the binary represnetation
 * of a number.
 *
 * @n: The number to be converted to binary
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}


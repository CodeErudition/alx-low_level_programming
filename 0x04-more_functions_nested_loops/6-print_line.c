#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: parameter.
 * Return: void.
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int nth;

		for (nth = 1; nth <= n; nth++)
			_putchar('_');
		_putchar('\n');
	}
}

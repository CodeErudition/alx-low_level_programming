#include "main.h"
/**
 * print_diagonal - Prints a diagonal line
 * @size: number of times.
 * Return: void.
 */
void print_square(int size)
{
	int i, j;

	if (size < 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; i++);
			_putchar("#");
			_putchar('\n');
		}
	}
}

#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 *
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list _num_list;
	unsigned int _count;

	va_start(_num_list, n);
	for (_count = 0; _count < n; _count++)
	{
		printf("%d", va_arg(_num_list, int));
		if (_count != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(_num_list);
}


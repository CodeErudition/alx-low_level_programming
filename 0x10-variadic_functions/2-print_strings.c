#include "variadic_functions.h"

/**
 * print_strings - A function that  prints strings, followed by a new line.
 *
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Requirement: If separator is NULL, it is not printed.
 * If one of the strings if NULL, (nil) is printed instead.
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list _string_list;
	char *_str_v;
	unsigned int _count;

	va_start(_string_list, n);
	for (_count = 0; _count < n; _count++)
	{
		_str_v = va_arg(_string_list, char *);
		if (_str_v == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", _str_v);
		}
		if (_count != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(_string_list);
}


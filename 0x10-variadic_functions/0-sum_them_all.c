#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its paramters.
 *
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: 0 when n == 0, else the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list _arg_list;
	unsigned int a, _arg_sum = 0;

	va_start(_arg_list, n);

	for (a = 0; a < n; a++)
	{
		_arg_sum += va_arg(_arg_list, int);
	}
	va_end(_arg_list);
	return (_arg_sum);
}

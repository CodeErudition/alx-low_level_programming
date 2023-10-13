#include "variadic_functions.h"

/**
 * print_all - A function that prints anything.
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *_separator = "";

	va_list _arg_lists;

	va_start(_arg_lists, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", _separator, va_arg(_arg_lists, int));
					break;
				case 'i':
					printf("%s%d", _separator, va_arg(_arg_lists, int));
					break;
				case 'f':
					printf("%s%f", _separator, va_arg(_arg_lists, double));
					break;
				case 's':
					str = va_arg(_arg_lists, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", _separator, str);
					break;
				default:
					i++;
					continue;
			}
			_separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(_arg_lists);
}


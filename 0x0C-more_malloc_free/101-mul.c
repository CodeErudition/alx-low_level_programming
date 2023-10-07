#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - A function that checks if a string is a valid
 * positive integer.
 *
 * @_str: A pointer to string to check.
 *
 * Return: 1 if the string is a valid positive integer, 0 otherwise.
 */

int is_digit(char *_str)
{
	if (_str == NULL || *_str == '\0')
	{
		return (0);
	}
	while (*_str)
	{
		if (*_str < '0' || *_str > '9')
		{
			return (0);
		}
		_str++;
	}
	return (1);
}

/**
 * main - Entry point ofa program that multiplies two positive numbers.
 *
 * @argc: The number of command arguments.
 * @argv: An array of command strings.
 *
 * Return: 0 on success, else 98.
 */
int main(int argc, char *argv[])
{
	char *_first_num, *_second_num;
	unsigned long int _n1, _n2, _product;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	_first_num = argv[1];
	_second_num = argv[2];

	if (!is_digit(_first_num) || !is_digit(_second_num))
	{
		printf("Error\n");
		return (98);
	}
	_n1 = strtoul(_first_num, NULL, 10);
	_n2 = strtoul(_second_num, NULL, 10);
	_product = _n1 * _n2;
	printf("%lu\n", _product);
	return (0);
}

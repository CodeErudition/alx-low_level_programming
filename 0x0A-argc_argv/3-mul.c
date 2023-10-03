#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 *
 * @s: A pointer string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i, d, n, len, f, num;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	num = 0;

	while (s[len] != '\0')
		len++;

	do {
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (d % 2)
				num = -num;
			n = n * 10 + num;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	} while (i < len && f == 0);

	if (f == 0)
		return (0);
	return (n);
}


/**
 * main - Entry point of a program that multiplies two numbers.
 *
 * @argc: Number of command arguments.
 * @argv: Array of arguments.
 *
 * Return: int (0) success.
 */

int main(int argc, char *argv[])
{
	int fact1, fact2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	fact1 = _atoi(argv[1]);
	fact2 = _atoi(argv[2]);
	product = fact1 * fact2;
	printf("%d\n", product);
	return (0);

}

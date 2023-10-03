#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _digit_checker - check string contains only  digit
 *
 * @str: array str
 *
 * Return: Always 0 (Success)
 */

int _digit_checker(char *str)
{
	unsigned int index;

	index = 0;
	while (index < strlen(str))
	{
		if (!isdigit(str[index]))
		{
			return (0);
		}
		index++;
	}
	return (1);
}


/**
 * main - Entry point of a program that adds positive numbers.
 *
 * @argc: Number of command  arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int index;
	int str_to_int;
	int sum = 0;

	index = 1;
	while (index < argc)
	{
		if (_digit_checker(argv[index]))
		{
			str_to_int = atoi(argv[index]);
			sum = sum + str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		index++;
	}
	printf("%d\n", sum);
	return (0);
}

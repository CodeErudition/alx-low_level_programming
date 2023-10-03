#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of a program that prints all arguments it receives.
 *
 * @argc: Number of command arguments.
 * @argv: Array of arguments.
 *
 * Return: int (0) success.
 */

int main(int argc, char *argv[])
{
	int ind = 0;

	while (ind < argc)
	{
		printf("%s\n", argv[ind]);
		ind++;
	}
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of a program that prints the number of
 * arguments passed into it (zero indexing).
 *
 * @argc: Number of command arguments.
 * @argv: Array of arguments.
 *
 * Return: int (0) success.
 */

int main(int argc, char *argv[])
{
	int zero_ind;

	(void)argv;
	zero_ind = argc - 1;
	printf("%d\n", zero_ind);
	return (0);
}

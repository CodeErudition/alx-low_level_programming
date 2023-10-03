#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program that prints
 * its name.
 *
 * @argc: Number of command argument.
 * @argv: Array of arguments.
 *
 * Return: int (0) success.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}

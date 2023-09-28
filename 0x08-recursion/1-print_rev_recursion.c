#include "main.h"

/**
 * _print_rev_recursion - A function that prints reverse of a string.
 * @s: A pointer to the string to be printed.
 * Return: void.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

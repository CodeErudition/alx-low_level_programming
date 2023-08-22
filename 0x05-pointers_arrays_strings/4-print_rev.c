#include "main.h"
/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int lgth = 0;
	int v;

	while (*s != '\0')
	{
		lgth++;
		s++;
	}
	s--;
	for (v = lgth; v > 0; v--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

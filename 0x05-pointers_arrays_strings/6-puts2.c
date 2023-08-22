#include "main.h"
/**
 * puts2 - a function that prints every other
 * character of a string, starting with
 * the first character, followed by a new line.
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int lgth = 0;
	int v = 0;
	char *s = str;
	int i;

	while (*s != '\0')
	{
		s++;
		lgth++;
	}
	v = lgth - 1;
	for (i = 0 ; i <= v ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

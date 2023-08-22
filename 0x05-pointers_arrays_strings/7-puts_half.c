#include "main.h"
/**
 * puts_half - a function that prints half of a string,
 * print the last character of n  if the character is
 * odd, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, lgth;

	lgth = 0;

	for (a = 0; str[a] != '\0'; a++)
		lgth++;

	n = (lgth / 2);

	if ((lgth % 2) == 1)
		n = ((lgth + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

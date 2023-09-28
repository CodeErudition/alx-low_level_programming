#include "main.h"

/**
 * _strlen_recursion - A fuction that returns the length of a string.
 * @s: A pointer to the string to be printed.
 * Return: int (in this case the  of a string).
 */

int _strlen_recursion(char *s)
{
	int slen;

	if (*s == '\0')
	{
		return (0);
	}
	slen = _strlen_recursion(s + 1);
	slen++;
	return (slen);
}

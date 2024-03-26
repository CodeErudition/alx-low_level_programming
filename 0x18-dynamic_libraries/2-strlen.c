#include "main.h"

/**
 * _strlen - a function returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int lgth = 0;

	while (*s != '\0')
	{
		lgth++;
		s++;
	}
	return (lgth);
}

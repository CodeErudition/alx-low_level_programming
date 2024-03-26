#include "main.h"
/**
 * _strncat - a function that concatenates two strings,
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int _string1;
	int _string2;

	_string1 = 0;
	while (dest[_string1] != '\0')
	{
		_string1++;
	}
	_string2 = 0;
	while (_string2 < n && src[_string2] != '\0')
	{
		dest[_string1] = src[_string2];
		_string1++;
		_string2++;
	}
	dest[_string1] = '\0';
	return (dest);
}

#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int _string1;
	int _string2;

	_string1 = 0;
	while (dest[_string1] != '\0')
	{
		_string1++;
	}
	_string2 = 0;
	while (src[_string2] != '\0')
	{
		dest[_string1] = src[_string2];
		_string1++;
		_string2++;
	}
	dest[_string1] = '\0';
	return (dest);
}

#include "main.h"
/**
 * _islower - checks for lowercase character
 * and outputs with _putchar.
 * @c: alphabets
 * Return: (1) if lower else (0) .
 */
int _islower(int c)
{
	char i;
	int checker = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			checker = 1;
		}
	}
	return (checker);
}

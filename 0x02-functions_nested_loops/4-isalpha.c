#include "main.h"
/**
 * _isalpha -  checks for alphabetic character.
 * @c: character.
 * Return: (1) if c is a letter, lowercase or uppercase otherwise (0).
 */
int _isalpha(int c)
{
	int alpha = 0;
	char upper, lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
			if (lower == c || upper == C)
				alpha = 1;
	}
	return (alpha);
}

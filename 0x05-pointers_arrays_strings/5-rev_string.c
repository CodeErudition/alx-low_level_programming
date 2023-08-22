#include "main.h"
/**
 * rev_string -  a function that reverses a string.
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int maker = 0;
	int i;

	while (s[maker] != '\0')
		maker++;
	for (i = 0; i < maker; i++)
	{
		maker--;
		rev = s[i];
		s[i] = s[maker];
		s[maker] = rev;
	}
}

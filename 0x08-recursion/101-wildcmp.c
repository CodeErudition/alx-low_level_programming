#include "main.h"

/**
 * wildcmp - A function that compares two strings
 * @s1: A pointer to the first string.
 * @s2: A pointer to the second string.
 *
 * Return: 1 if s1 matches s2 (including wildcards), 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)));
	}
	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}


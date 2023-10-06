#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -A function that concatenates two strings, taking only
 * the first n bytes
 *
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, i, j;
	char *str_concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[s1_len])
	{
		s1_len++;
	}
	while (s2[s2_len])
	{
		s2_len++;
	}
	if (n >= s2_len)
	{
		n = s2_len;
	}
	str_concat = malloc(sizeof(char) * (s1_len + n + 1));
	if (str_concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		str_concat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str_concat[i + j] = s2[j];
	}
	str_concat[i + j] = '\0';
	return (str_concat);
}

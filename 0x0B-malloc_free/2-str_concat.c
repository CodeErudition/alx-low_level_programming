#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A fuction that concatenates two strings and returns a newly
 * allocated string.
 *
 * @s1: A pointer to the first string to be concatenated.
 * @s2: A pointer to the second string to be concatenated.
 *
 * Return: A pointer to the newly allocated concatenated string.
 * And returns NULL if memory allocation fails.
 */

#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0, i, j;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	new_str = (char *)malloc(s1_len + s2_len + 1);
	if (new_str != NULL)
	{
		for (i = 0; i < s1_len; i++)
			new_str[i] = s1[i];
		for (j = 0; j < s2_len; j++)
			new_str[s1_len + j] = s2[j];
		new_str[s1_len + s2_len] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_str);
}


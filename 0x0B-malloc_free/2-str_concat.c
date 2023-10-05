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

char *str_concat(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0, i, j;
	char *new_str;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}
	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}
	new_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (new_str != NULL)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			new_str[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j] != '\0')
		{
			new_str[i] = s2[j];
			i++;
			j++;
		}
		new_str[i] = '\0';
	}
	return (new_str);
}

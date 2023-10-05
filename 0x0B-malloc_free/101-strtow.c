#include "main.h"
#include <stdlib.h>

int is_space(char c);

/**
 * is_space - Checks if a character is a space (whitespace, tab, or newline).
 *
 * @c: The character to check.
 *
 * Return: 1 if the character is a space, 0 otherwise.
 */

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * strtow - Splits a string into words.
 *
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words). Each element of the
 * array contains a single word, null-terminated. The last element of the
 * returned array is NULL. Returns NULL if str == NULL or str == "".
 * If the function fails, it returns NULL.
 */

char **strtow(char *str)
{
	char **words = NULL;
	int i, j, word_count = 0;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1])))
			word_count++;
	}

	if (word_count == 0)
	{
		return (NULL);
	}
	words = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*str)
	{
		while (is_space(*str))
			str++;

		for (j = 0; str[j] && !is_space(str[j]); j++)
			;

		words[i] = (char *)malloc(sizeof(char) * (j + 1));
		if (words[i] == NULL)
		{
			for (i = 0; i < word_count; i++)
			{
				free(words[i]);
			}
			free(words);
			return (NULL);
		}
		for (j = 0; str[j] && !is_space(str[j]); j++)
		{
			words[i][j] = str[j];
		}
		words[i][j] = '\0';
		i++;
		str += j;
	}

	words[word_count] = NULL;
	return (words);
}

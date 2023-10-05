#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: A pointer to the string to be copied or suplicated.
 *
 * Return: If memory allocation is successful, returns a pointer to the
 * dynamically allocated duplicate string. If str is NULL or if
 * memory allocation fails, returns NULL.
 */

char *_strdup(char *str)
{
	unsigned int str_len;
	unsigned int i;
	char *copy_str;

	if (str == NULL)
		return (NULL);
	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	str_len++;
	copy_str = (char *)malloc(str_len * sizeof(char));
	if (copy_str != NULL)
	{
		for (i = 0; i < str_len; i++)
		{
			copy_str[i] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	return (copy_str);
}


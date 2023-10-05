#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program with
 * newline separators.
 *
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string.
 */

char *argstostr(int ac, char **av)
{
	int i, index, final_len = 0;
	char *_arg;
	char *arg_concate;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		_arg = av[i];
		while (*_arg)
		{
			final_len++;
			_arg++;
		}
		final_len++;
	}
	arg_concate = (char *)malloc(sizeof(char) * (final_len + 1));
	if (arg_concate == NULL)
	{
		return (NULL);
	}

	index = 0;
	for (i = 0; i < ac; i++)
	{
		_arg = av[i];
		while (*_arg)
		{
			arg_concate[index++] = *_arg;
			_arg++;
		}
		arg_concate[index++] = '\n';
	}
	arg_concate[index] = '\0';
	return (arg_concate);
}


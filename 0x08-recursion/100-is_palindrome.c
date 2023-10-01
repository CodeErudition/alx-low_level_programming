#include "main.h"

int palindrome_test(char *str, int forward, int backward);
int str_len(char *str);

/**
 * palindrome_test - A recursive helper function to check if a string
 * is a palindrome.
 *
 * @str: The string to be checked.
 * @forward: The left index of the current comparison.
 * @backward: The right index of the current comparison.
 *
 * Return: 1 if the substring is a palindrome, 0 if it's not.
 */

int palindrome_test(char *str, int forward, int backward)
{
	if (forward >= backward)
	{
		return (1);
	}
	if (str[forward] != str[backward])
	{
		return (0);
	}
	return (palindrome_test(str, forward + 1, backward - 1));
}

/**
 * str_len - A function that keeps track of the string length.
 *
 * @str: A pointer to the string.
 *
 * Return: int ( int this case the length of the string)
 */

int str_len(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		str++;
		return (1 + str_len(str));
	}
}
/**
 * is_palindrome - A function that checks if a given string is a
 * palindrome using  recursion.
 *
 * @s: A pointer to the string to be checked.
 *
 * Return: 1 if 's' is a palindrome, 0 if it's not.
 */

int is_palindrome(char *s)
{
	int slen;

	slen = str_len(s);
	if (slen <= 1)
	{
		return (1);
	}
	return (palindrome_test(s, 0, slen - 1));
}

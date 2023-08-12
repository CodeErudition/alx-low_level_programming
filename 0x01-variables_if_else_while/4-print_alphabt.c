#include <stdio.h>
/**
 * main - Entry point of this program that prints
 * aphabet in lowercase except q and e.
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
	putchar('\n');
	return (0);
}

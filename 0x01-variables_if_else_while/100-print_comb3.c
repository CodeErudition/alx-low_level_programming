#include <stdio.h>
/**
 * main - Entry point of this program.
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		putchar('.');
		putchar(' ');
	}
	return (0);
}
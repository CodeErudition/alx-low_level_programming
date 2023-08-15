#include <stdio.h>
/**
 * main - Entry point of the program.
 * Return: 0 (success)
 */
int main(void)
{
	int pair1, pair2;

	for (pair1 = 0; pair1 < 100; pair1++)
	{
		for (pair2 = 0; pair2 < 100; pair2++)
		{
			if (pair1 < pair2)
			{
				putchar('0' + (pair1 / 10));
				putchar('0' + (pair1 % 10));
				putchar(' ');
				putchar('0' + (pair2 / 10));
				putchar('0' + (pair2 % 10));
				if (pair1 != 98 || pair2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include "main.h"
/**
 * main - Entry point of a program that prints _putchar.
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char putArrays[] = "_putchar";

	for (i = 0; putArrays[i] != '\0'; i++)
	{
		_putchar(putArrays[i]);
	}
	_putchar('\n');
	return (0);
}


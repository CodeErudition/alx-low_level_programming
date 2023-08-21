#include <stdio.h>
/**
 * main - Entry point if the program that
 * prints the numbers from 1 to 100, followed
 * by a new line. But for multiples of three
 * print Fizz instead of the number and for the multiples
 * of five print Buzz. For numbers which are
 * multiples of both three and five print FizzBuzz.
 * Return: 0 (success).
 */

int main(void)
{
	int nth;
	for (nth = 1; nth <= 100; nth++)
	{
		if (nth % 3 == 0 && nth % 5 == 0)
			printf("%s", "FizzBuzz");
		else if (nth % 3 == 0)
			printf("%s", "Fizz");
		else if (nth % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", nth);

		if (nth < 100)
			printf(", ");
	}
	printf("\n");

	return 0;
}

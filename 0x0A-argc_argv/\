#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program that prints the minimum number of
 * coins to make change for an amount of money.
 *
 * @argc: Number of command arguments.
 * @argv: An array of command arguments.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	int _cents, i, _num;
	int _coins[] = {25, 10, 5, 2, 1};
	int _req_coins;
	int _min_coins;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	_cents = atoi(argv[1]);
	if (_cents < 0)
	{
		printf("0\n");
		return (0);
	}
	_req_coins = sizeof(_coins) / sizeof(_coins[0]);
	_min_coins = (0);

	for (i = 0; i < _req_coins; i++)
	{
		_num = _cents / _coins[i];
		_min_coins += _num;
		_cents %= _coins[i];
	}
	printf("%d\n", _min_coins);
	return (0);
}

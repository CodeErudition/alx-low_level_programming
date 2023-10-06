#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * from min to max.
 *
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the newly created array, else NULL.
 */

int *array_range(int min, int max)
{
	int *_arr_ptr;
	int range, i;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min + 1;
	_arr_ptr = malloc(sizeof(int) * range);

	if (_arr_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		_arr_ptr[i] = min++;
	}
	return (_arr_ptr);
}

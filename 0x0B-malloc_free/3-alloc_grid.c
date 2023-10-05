#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional array
 * of integers.
 *
 * @width: input width
 * @height: input height
 *
 * Return: A pointer to a 2 dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr_grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr_grid = (int **)malloc(height * sizeof(int *));
	if (arr_grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr_grid[i] = (int *)malloc(width * sizeof(int));
		if (arr_grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr_grid[j]);
			}
			free(arr_grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr_grid[i][j] = 0;
		}
	}
	return (arr_grid);
}

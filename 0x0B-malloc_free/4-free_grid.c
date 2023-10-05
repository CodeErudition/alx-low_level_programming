#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: A pointer to the 2D grid (array of pointers) previously created
 * by the alloc_grid function.
 * @height: The height of the 2D grid
 *
 * Ruturn: void.
 */

void free_grid(int **grid, int height)
{
	int index;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by my alloc_grid function
 * @grid: the grid to free
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

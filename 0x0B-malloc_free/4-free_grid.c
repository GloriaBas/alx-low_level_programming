#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - A function that frees a 2 dimensional grid.
 * created by alloc_grid
 * @grid: grid
 * @height: height of the grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}

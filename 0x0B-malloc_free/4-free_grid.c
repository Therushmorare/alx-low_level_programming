#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free the grid function
 *@grid: grid printed
 *@height: the height of the grid
 *
 *Return: nothing
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

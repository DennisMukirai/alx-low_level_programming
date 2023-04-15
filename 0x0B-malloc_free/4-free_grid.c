#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid function
 * @grid: matrix double pointer
 * @height: rows(pointer)
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(*(grid + x));
	}

	free(grid);
}

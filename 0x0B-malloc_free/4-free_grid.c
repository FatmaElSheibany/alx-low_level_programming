/**
 * free_grid - frees the memory allocated for a given 2D grid
 *
 * @grid: the double pointer to the 2D grid whose memory is to be freed
 * @height: number of rows in the array
 *
 */

#include <stdlib.h>
#include <stdio.h>

void free_grid(int **grid, int height)
{
	int i;

	i = height - 1;
	while (i >= 0)
	{
		free(grid[i]);
		i--;
	}
}

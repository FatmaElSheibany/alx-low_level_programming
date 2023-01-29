/**
 * alloc_grid - returns a pointer to a 2D array of int initialized to 0
 *
 * @width: number of columns in the array
 * @height: number of rows in the array
 *
 * Return: pointer to the array if success else NULL
 *
 */

#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	grid = malloc(height * sizeof(int));

	if (grid == NULL)
	{
		/* printf("grid is NULL after assigning height bytes\n"); */
		return (NULL);
	}
	else if (height == 0 || width == 0)
	{
		/* printf("either height or width of grid = 0\n---\n"); */
		/* printf("grid ==> row = %d ; col = %d\n", height, width); */
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		i++;
	}

	j = 0;
	i = 0;

	while (i < height)
	{
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}

	return (grid);
}

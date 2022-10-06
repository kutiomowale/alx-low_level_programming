#include <stdlib.h>
/**
 * free_grid -  a function that frees a 2 dimensional grid previously
 * created by the alloc_grid function(3-alloc_grid.c)
 *
 * @grid: the grid or array
 * @height: the number of rows
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

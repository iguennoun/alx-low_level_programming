#include <stdlib.h>
#include "main.h"

/**
** free_grid - frees a 2 dimensional matrix of integers.
** @grid: matrix of integers.
** @height: height of the matrix.
** Return: void.
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height > 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}

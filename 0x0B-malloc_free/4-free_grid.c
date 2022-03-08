#include "main.h"

/**
 * free_grid - fn libera rejilla de 2 dim. previa/ creada por función
 * @grid: rejilla que será liberada
 * @height: altura de la rejilla
 * Return: void
 */

void free_grid(int **grid, int height)
{
int k;
for (k = 0; k < height; k++)
{
free(grid[k]);
}
free(grid);
}

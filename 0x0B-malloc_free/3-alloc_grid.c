#include "main.h"

/**
 * alloc_grid - función devuelva puntero a matriz de 2 dim. enteros.
 * @width: ancho del array
 * @height: altura del array
 * Return: puntero al array
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **grid;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(sizeof(int *) * height);
if (!grid)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (!grid[i])
{
while (i >= 0)
{
free(grid[i]);
i--;
}
free(grid);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}

#include <stdlib.h>
#include "main.h"
/**
 * array_range - función que crea una matriz de enteros
 * @min: entero mínimo
 * @max: entero máximo del array
 * Return: puntero a la matriz recién creada
 **/

int *array_range(int min, int max)
{
int *p;
int k, size;
if (min > max)
return (NULL);
size = (max - min) + 1;
p = malloc(size *sizeof(*p));
if (p == NULL)
return (NULL);
for (k = 0; k < size && min <= max; k++, min++)
*(p + k) = min;
return (p);
}

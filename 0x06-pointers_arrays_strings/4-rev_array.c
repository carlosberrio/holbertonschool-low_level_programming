#include "main.h"

/**
 * reverse_array - función que invierta el contenido de una matriz de enteros.
 * @a: arreglo a ser reversado
 * @n: número de elementos del array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int k;
int z;
for (z = 0; z < n; z++)
{
k = a[z];
a[z] = a[n - 1];
a[n - 1] = k;
n--;
}
}


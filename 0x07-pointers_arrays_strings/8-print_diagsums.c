#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - fn imprima suma dos diagonales de matriz cuadrada enteros.
 * @a: puntero
 * @size: entero
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
int k, n, m;
int s = 0;
int x = 0;

for (k = 0; k < size; k++)
{
m = (k * size) + k;
s += *(a + m);
}
for (n = 0; n < size; n++)
{
m = (n * size) + (size - 1 - n);
x += *(a + m);
}
printf("%d, %d\n", s, x);
}

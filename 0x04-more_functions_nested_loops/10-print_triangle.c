#include "main.h"
/**
* print_triangle - impresión de un triángulo con #s
* @size: toma un entero para el tamaño del triángulo
*/
void print_triangle(int size)
{
int f, c, k;

if (size <= 0)
_putchar('\n');
for (f = 0; f < size; f++)
{
for (c = size - f; c > 1; c--)
_putchar(' ');
for (k = f + c; k >= 1; k--)
_putchar('#');
_putchar('\n');
}
}

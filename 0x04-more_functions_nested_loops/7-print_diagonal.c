#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - dibujar una línea diagonal
 * @n: variable
 * Return: números
 */
void print_diagonal(int n)
{
int a, b;

if (n <= 0)
_putchar('\n');
for (a = 0; a < n; a++)
{
for (b = 0; b <= a; b++)
{
if (a == b)
{
_putchar('\\');
_putchar('\n');
}
else
{
_putchar(' ');
}
}
}
}

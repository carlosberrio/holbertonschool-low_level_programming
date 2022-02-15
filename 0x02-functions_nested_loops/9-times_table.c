#include "main.h"
/**
 * times_table - función que imprima tabla multiplicar del 9, comenzando por 0
 * Return: tabla de multiplicar
 */
void times_table(void)
{
int n, c, p;

for (n = 0; n <= 9; n++)
{
_putchar ('0');

for (c = 1; c <= 9; c++)
{
_putchar(',');
_putchar(' ');

p = n * c;

if (p <= 9)
_putchar(' ');
else
_putchar((p / 10) + '0');

_putchar((p % 10) + '0');
}
_putchar('\n');

}
}

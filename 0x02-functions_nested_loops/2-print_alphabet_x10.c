#include "main.h"
/**
 * print_alphabet_x10 - mprimir alfabeto en minuscula x 10 veces
 * Return: siempre 0
*/

void print_alphabet_x10(void)
{
int A;
int B = 0;
while (B++ <= 9)
{
for (A = 97; A < 123; A++)
{
_putchar(A);
}
putchar('\n');
}
}

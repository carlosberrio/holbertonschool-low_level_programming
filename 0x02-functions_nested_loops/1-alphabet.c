#include "main.h"
/**
 * main - mprimir alfabeto en minuscula
 * Return: siempre 0
*/

void print_alphabet(void)
{
int A;
for (A = 97; A < 123; A++)
{
_putchar(A);
}
putchar('\n');
}

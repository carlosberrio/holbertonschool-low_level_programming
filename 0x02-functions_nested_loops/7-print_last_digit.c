#include "main.h"
/**
 * Main - escriba una función que escriba el último dígito de un número
 * Return: el último dígito de un número
 */

int print_last_digit(int nld)
{
int a;
a = (nld % 10);
if (a < 0)
{
a = (-1 * a);
}
_putchar(a + '0');
return (a);
}

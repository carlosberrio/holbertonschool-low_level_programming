#include "main.h"
/**
 * print_last_digit - función que escriba el último dígito de un número
 * @n: variable
 * Return: el último dígito de un número
 */

int print_last_digit(int n)
{
int a;
a = (n % 10);
if (a < 0)
{
a = (-1 * a);
}
_putchar(a + '0');
return (a);
}

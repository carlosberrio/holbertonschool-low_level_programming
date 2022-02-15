#include "main.h"
/**
 * main - escriba una función que imprima el signo de un numero
 * Return: 1 e imprime + si es mayor que 0
 * 0 e imprime 0 si es igual a 0
 * -1 e imprime - si es menor que 0
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}

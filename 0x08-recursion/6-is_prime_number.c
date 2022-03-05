#include "main.h"
int actual_prime(int n, int i);
/**
 * is_prime_number - dice si un entero es un número primo o no
 * @n: número a evaluar
 * Return: 1 si es número primo, 0 si no lo es
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calcule si un número es primo
 * @n: número a evaluar
 * @i: iterador
 * Return: 1 si es número primo, 0 si no lo es
 */
int actual_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (actual_prime(n, i - 1));
}

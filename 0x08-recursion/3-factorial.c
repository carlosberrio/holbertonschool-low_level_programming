#include "main.h"

/**
 * factorial - retorne el factorial de un número dado
 * @n: int
 * Return: factorial de número dado
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}

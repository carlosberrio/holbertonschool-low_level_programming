#include "main.h"

/**
 * _pow_recursion - retorna el valor x elevado a potencia y
 * @x: int
 * @y: int
 * Return: x a la potencia de y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}

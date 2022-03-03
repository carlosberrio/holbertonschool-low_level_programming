#include "main.h"

/**
 * wildcmp - función que compra si 2 cadenas son idénticas
 * @s1: cadena uno
 * @s2: cadena dos
 * Return: si son iguales 1, si no lo son 0
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == 0 && *s2 == 0)
{
return (1);
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
else if (*s1 == 0 && *(s2 + 1) != 0 && *s2 == '*')
{
return (0);
}
else if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
return (0);
}

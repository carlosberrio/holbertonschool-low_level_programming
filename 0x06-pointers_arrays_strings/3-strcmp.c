#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Función que compara 2 cadenas
 * @s1: cadena 1 a comparar
 * @s2: cadena 2 a comparar
 * Return: diferencia de las cadenas
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2);
}


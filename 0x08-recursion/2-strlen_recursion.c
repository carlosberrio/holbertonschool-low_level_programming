#include "main.h"

/**
 * _strlen_recursion - retorne la longitud de una cadena
 * @s: cadena
 * Return: length
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

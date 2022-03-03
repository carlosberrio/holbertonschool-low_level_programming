#include "main.h"
#include <string.h>

/**
 * compare_chars - chequea si 2 caracteres son iguales
 * @s: cadena
 * @i: char 1
 * @j: char 2
 * Return: 1 si es igual, 0 si no lo es
 */

int compare_chars(char *s, int i, int j)
{
if (i == j)
{
return (1);
}
if (s[i] != s[j])
{
return (0);
}
if (i < j + 1)
{
return (compare_chars(s, i + 1, j - 1));
}
return (1);
}

/**
 * is_palindrome - chequea si la cadena es palindroma
 * @s: cadena
 * Return: 1 si es palindrome, 0 si no lo es
 */

int is_palindrome(char *s)
{
int len = strlen(s);
if (len == 0)
{
return (1);
}
return (compare_chars(s, 0, len - 1));
}

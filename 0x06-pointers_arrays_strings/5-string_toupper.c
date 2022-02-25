#include "main.h"

/**
 * string_toupper - función cambia las minúsculas de cadena a mayúsculas.
 * @s: cadena
 * Return: cadena en mayúsculas
 */

char *string_toupper(char *s)
{
int k;
for (k = 0; s[k] != '\0'; k++)
{
if (s[k] >= 'a' && s[k] <= 'z')
{
s[k] = s[k] - 32;
}
}
return (s);
}

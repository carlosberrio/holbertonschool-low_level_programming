#include "main.h"

/**
 * _strspn - función q obtenga longitud de subcadena de prefijo.
 * @s: puntero
 * @accept: puntero
 * Return: número caracteres en el segmento inicial de s
 */

unsigned int _strspn(char *s, char *accept)
{
int count = 0;
int k = 0;
int z = 0;

while (s[k] != '\0')
{
while (accept[z] != '\0')
{
if (accept[z] == s[k])
count++;
z++;
}
z = 0;
k++;
if (s[k] == 32)
{
break;
}
}
return (count);
}

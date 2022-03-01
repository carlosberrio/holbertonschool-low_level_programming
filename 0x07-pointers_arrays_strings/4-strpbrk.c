#include "main.h"

/**
 * _strpbrk - función que localice una subcadena
 * @s: caracter
 * @accept: caracter
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
int k = 0;
int n;

while (s[k] != '\0')
{
n = 0;
while (accept[n] != '\0')
{
if (s[k] == accept[n])
{
return (s + k);
}
n++;
}
k++;
}
return (0);
}


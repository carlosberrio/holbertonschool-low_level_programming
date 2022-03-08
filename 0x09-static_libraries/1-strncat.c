#include "main.h"
#include <stdio.h>

/**
 * _strncat - función que concatena 2 cadenas
 * @dest: cadena
 * @src: cadena
 * @n: entero
 * Return: Hello World varias veces
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;
int k;
while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
b++;
}
for (k = 0; (k <= b) &&(k < n); k++)
{
dest[a] = src[k];
a++;
}
return (dest);
}

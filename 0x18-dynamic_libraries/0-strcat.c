#include "main.h"
#include <stdio.h>

/**
 * _strcat - función que concatena 2 cadenas
 * @dest: cadena
 * @src: cadena
 * Return: Hello World
 */
char *_strcat(char *dest, char *src)
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
for (k = 0; k <= b; k++)
{
dest[a] = src[k];
a++;
}
return (dest);
}


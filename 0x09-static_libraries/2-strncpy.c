#include "main.h"
#include <stdio.h>

/**
 * _strncpy - función que cpis una cadena
 * @dest: cadena desde
 * @src: cadena hasta
 * @n: entero. number of char
 * Return: cadena de asteriscos y números
 */
char *_strncpy(char *dest, char *src, int n)
{
int k;
for (k = 0; src[k] != '\0' && (k < n); k++)
{
dest[k] = src[k];
}
while (k < n)
{
dest[k] = '\0';
k++;
}
return (dest);
}


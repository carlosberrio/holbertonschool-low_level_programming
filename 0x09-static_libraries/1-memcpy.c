#include "main.h"

/**
 * _memcpy - función que copie un área de memoria
 * @dest: pointer
 * @src: byte
 * @n: número de byte
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}


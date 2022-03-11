#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - función que concatena 2 cadenas.
 * @s1: cadena uno
 * @s2: cadena 2
 * @n: primeros n bytes de s2
 * Return: el puntero debe apuntar a un espacio recién asignado
 * en la memoria que tiene el contenido de s1, deguido de
 * los primeros n bytes de s2, y terminado en NULL
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
int p;
unsigned int k;
p = k = 0;
while (s1[p] != '\0')
{
p++;
}
while (s2[k] != '\0')
{
k++;
}
str = malloc(sizeof(char) * (p + k + 1));
if (str == NULL)
{
return (NULL);
}
p = k = 0;
while (s1[p] != '\0')
{
str[p] = s1[p];
p++;
}
while (k < n && s2[k] != '\0')
{
str[p] = s2[k];
p++, k++;
}
str[p] = '\0';
return (str);
}

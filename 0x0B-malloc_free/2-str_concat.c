#include "main.h"

/**
 * str_concat - concatena 2 cadenas
 * @s1: cadena uno
 * @s2: cadena dos
 * Return: puntero que apunta a un nuevo str
 */

char *str_concat(char *s1, char *s2)
{
char *final_str;
int k;
int m;
if (!s1)
{
s1 = "";
}
if (!s2)
{
s2 = "";
}
final_str = malloc(sizeof(*s1) * strlen(s1) + sizeof(*s2) * strlen(s2) + 1);
if (!final_str)
{
return (NULL);
}
k = 0;
while (s1[k] != '\0')
{
final_str[k] = s1[k];
k++;
}
m = 0;
while (s2[m] != '\0')
{
final_str[k] = s2[m];
k++;
m++;
}
return (final_str);
}

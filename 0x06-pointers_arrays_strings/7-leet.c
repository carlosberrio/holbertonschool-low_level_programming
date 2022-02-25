#include "main.h"

/**
 * leet - Cambia los caracteres
 * @str: cadena
 * Return: cadena
 */

char *leet(char *str)
{
int nn = 0;
int k;
char a[11] = "aAeEoOtTlL";
char b[11] = "4433007711";
while (str[nn] != '\0')
{
k = 0;
while (a[k] != '\0')
{
if (str[nn] == a[k])
{
str[nn] = b[k];
}
k++;
}
nn++;
}
return (str);
}

#include "main.h"
#include <stdio.h>

/**
 * rev_string - función que invierta una cadena
 * @s: variable ingreso
 * Return: cadena en reversa
 */
void rev_string(char *s)
{
char a = s[0];
int b = 0;
int k;
while (s[b] != '\0')
b++;
for (k = 0; k < b; k++)
{
b--;
a = s[k];
s[k] = s[b];
s[b] = a;
}
}

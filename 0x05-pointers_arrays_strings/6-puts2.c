#include "main.h"
/**
 * puts2 - función que impirma cada 2 caracteres de una cadena
 * @str: variable
 * Return: resultado
 */
void puts2(char *str)
{
int a = 0;
int b = 0;
char *x = str;
int k;
while (*x != '\0')
{
x++;
a++;
}
b = a - 1;
for (k = 0 ; k <= b ; k++)
{
if (k % 2 == 0)
{
_putchar(str[k]);
}
}
_putchar('\n');
}

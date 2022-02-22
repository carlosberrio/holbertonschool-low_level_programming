#include "main.h"
/**
 * puts_half - función que impirma la segunda mitad de una cadena
 * @str: variable entrada
 * Return: segunda mitad
*/
void puts_half(char *str)
{
int a, b, k;
k = 0;
for (a = 0; str[a] != '\0'; a++)
k++;
b = (k / 2);
if ((k % 2) == 1)
b = ((k + 1) / 2);
for (a = b; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}

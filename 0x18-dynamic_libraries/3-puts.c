#include "main.h"
#include <stdio.h>

/**
 * _puts - función que impirma una cadena luego nueva línea
 * @str: variable
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
{
_putchar('\n');
}
}

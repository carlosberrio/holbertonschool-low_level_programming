#include "main.h"
#include <stdio.h>

/**
 * more_numbers - imprimir 10 veces los números de 0 a 14
 * Return: números
 */
void more_numbers(void)
{
char a;
int b;

for (b = 0; b < 10; b++)
{
for (a = 0; a <= 14; a++)
{
if (a > 9)
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
}
_putchar('\n');
}
}

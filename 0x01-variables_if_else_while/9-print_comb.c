#include<stdio.h>

/**
 * main - imprima las combinaciones posibles de números de 1 solo dígito
 * Return: siempre 0
 */

int main(void)
{
int num;
for (num = 48; num <= 57; num++)
{
putchar(num);
putchar(',');
putchar(32);
putchar('\n');
}
return (0);
}

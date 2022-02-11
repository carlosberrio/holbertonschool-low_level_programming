#include<stdio.h>

/**
 * main - imprima los numeros del 1 al 16
 * Return: siempre 0
 */

int main(void)
{
int num;
char alf;
for (num = 48; num <= 57; num++)
putchar(num);
for (alf = 'a'; alf <= 'f'; alf++)
putchar(alf);
putchar('\n');
return (0);
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - imprima el alfabeto al revés, de la z a la a
 * Return: siempre 0
 */

int main(void)
{
char alf;
for (alf = 'z'; alf >= 'a'; alf--)
putchar(alf);
putchar('\n');
return (0);
}

#include "main.h"

/**
 * main imprimir la palabra _putchar con un espacio
 * Return: siempre 0
*/

int main(void)
{
char a[] = "_putchar\n";
int b;
for (b = 0; b < 9; b++)
{
_putchar(a[b]);
}
return (0);
}

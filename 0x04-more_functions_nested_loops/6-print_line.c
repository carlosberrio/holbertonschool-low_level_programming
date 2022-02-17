#include "main.h"
#include <stdio.h>

/**
 * print_line - dibujar una línea recta en la terminal
 * @n: variable
 * Return: números
 */
void print_line(int n)
{
while (n > 0)
{
	_putchar('_');
	n--;
}
_putchar('\n');

}


#include "main.h"

/**
 * print_binary - print decimal in binary
 * @n: decimal number
 * Return: void - just prints
 */
void print_binary(unsigned long int n)
{
if (n >> 0)
{
if (n >> 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
else
{
_putchar ('0');
}
}

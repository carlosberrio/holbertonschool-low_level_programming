#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: entero
 * @m: entero
 * Return: counter
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int counter = 0;
int i = 0;

for (i = 63; i >= 0; i--)
{
if (((n ^ m) >> i) & 1)
counter++;
}
return (counter);
}

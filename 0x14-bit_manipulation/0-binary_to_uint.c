#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string binary
 * Return: unsigned int - decimal
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int p = 0;
int i;

if (!b)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}

for (i = 0; b[i] != '\0'; i++)
{
p <<= 1;
if (b[i] == '1')
p += 1;
}
return (p);
}

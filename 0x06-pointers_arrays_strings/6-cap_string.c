#include "main.h"

/**
 * cap_string - función pone mayúsculas las palabras de cadena.
 * @s: cadena
 * Return: 0
 */

char *cap_string(char *s)
{
int n = 0;
int k;
char w[14] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

while (s[n] != '\0')
{
if (n == 0 && s[n] >= 'a' && s[n] <= 'z')
{
s[n] = s[n] - 32;
}
k = 0;
while (w[k] != '\0')
{
if (w[k] == s[n] && (s[n + 1] >= 'a' && s[n + 1] <= 'z'))
{
s[n + 1] = s[n + 1] - 32;
}
k++;
}
n++;
}
return (s);
}

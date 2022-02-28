#include "main.h"

/**
 * *_memset - función que llena la memoria con un byte constante
 * @s: puntero al bloque de memoria a rellenar
 * @b: valor que se va a establecer
 * @n: número de bytes que a poner en el valor
 * Return: devuelve un puntero a la zona de memoria s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}

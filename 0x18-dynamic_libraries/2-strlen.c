#include "main.h"
#include <stdio.h>

/**
 * _strlen - función que devuelve la longitud de una cadena
 * @s: variable
 * Return: Always 0.
 */
int _strlen(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
;
return (a);
}


#include "main.h"

/**
 * create_array - crea array de caracteres empezando con caracter específico
 * @size: tamañp del array
 * @c: caracter
 * Return: puntero del array
 */

char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}

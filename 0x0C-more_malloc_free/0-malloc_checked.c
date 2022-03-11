#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  malloc_checked - asignación de memoria usando malloc
 *  @b: número de bytes que se asignarán en memoria
 *  Return: 0
 */

void *malloc_checked(unsigned int b)
{
void *k;
k = malloc(b);
if (k == NULL)
{
exit(98);
}
else
{
return (k);
}
}


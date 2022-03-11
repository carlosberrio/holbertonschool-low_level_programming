#include <stdlib.h>

/**
 * *_calloc - función que asigne memoria a matriz
 * @nmemb: entrada
 * @size: size
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int k;
char *m;
if (nmemb == 0 || size == 0)
return (NULL);
m = malloc(nmemb * size);
if (m == NULL)
return (NULL);
for (k = 0; k < nmemb * size; k++)
*(m + k) = 0;
return ((void *)m);
}

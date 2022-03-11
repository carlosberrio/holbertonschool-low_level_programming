#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - función que concatena 2 cadenas.
 * @s1: cadena uno
 * @s2: cadena 2
 * @n: primeros n bytes de s2
 * Return: el puntero debe apuntar a un espacio recién asignado
 * en la memoria que tiene el contenido de s1, deguido de
 * los primeros n bytes de s2, y terminado en NULL
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *rtg;
int i;
unsigned int j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
while (s1[i] != '\0')
i++;
rtg = malloc(sizeof(char) * (i + n + 1));
if (rtg == NULL)
return (NULL);
i = j = 0;
while (s1[i] != '\0')
{
rtg[i] = s1[i];
i++;
}
while (j < n && s2[j] != '\0')
{
rtg[i] = s2[j];
i++, j++;
}
rtg[i] = '\0';
return (rtg);
}

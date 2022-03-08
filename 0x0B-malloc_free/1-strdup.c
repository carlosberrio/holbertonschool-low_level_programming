#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 *           space in memory, which cointains a copy
 *           of the str given as a parameter.
 * @str: copy of the str
 * Return: pointer with the new space in memory
 */

char *_strdup(char *str)
{
char *arr;
int i;
if (str == NULL)
{
return (NULL);
}
arr = malloc(sizeof(*str) * strlen(str) + 1);
if (arr == NULL)
{
return (NULL);
}
i = 0;
while (str[i] != '\0')
{
arr[i] = str[i];
i++;
}
return (arr);
}


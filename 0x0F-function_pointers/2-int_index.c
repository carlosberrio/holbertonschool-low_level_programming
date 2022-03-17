#include "function_pointers.h"
/**
 * int_index - this is main
 * @array: this is array
 * @size: this is size
 * @cmp: this is cmp
 * Return: -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}

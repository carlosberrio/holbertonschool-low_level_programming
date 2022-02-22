#include<stdio.h>
#include "main.h"
/**
 *print_array - función que imprima n elementos de un array de enteros
 *@a: variable
 *@n: variable.
 */
void print_array(int *a, int n)
{
int k;
for (k = 0 ; k < n; k++)
{
printf("%d", a[k]);
if (k != n - 1)
{
printf(", ");
}
}
printf("\n");
}

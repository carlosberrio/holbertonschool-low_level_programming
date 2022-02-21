#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: variable
 * @b: variable
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}


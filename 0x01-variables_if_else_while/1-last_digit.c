#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - asigna un numero a la variable cada vez que se ejecute
 * Return: siempre 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if (n % 10)
        printf("%d is positive", n);
        else if (n == 0)
        printf("%d is zero", n);
        else if (n < 0)
        printf("%d is negative", n);
       	return (0);
}

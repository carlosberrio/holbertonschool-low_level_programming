#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - escribir número aleatorio positivo negativo o cero
 * Return: siempre 0
*/

int main(void)
{
	int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
printf("last digit of %d and %i\n", n, n % 10);
else if (n == 0)
printf(Last digit of int and is 0\n");
else if (n < 6)
printf(Last digit of int ans is less than 6 and not 0\n");

	return (0);
}

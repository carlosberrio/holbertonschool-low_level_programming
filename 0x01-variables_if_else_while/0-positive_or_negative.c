#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - escribir número aleatorio positivo negativo o cero
 * Return : siempre 0
*/
int main(void)
{
	int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
return (0);
	if (n > 0)
	  printf("%zu is positive", n);
	else if (n == 0)
	  printf("%zu is zero", n);
	else
	  printf("%zu is negative", n);
	return (0);
}

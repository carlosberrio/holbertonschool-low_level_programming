#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - imprima el alfabeto en minúsculas y luego en mayúsculas
 * Return: siempre 0
 */

int main(void)
{
char alf;
for (alf = 'a'; alf <= 'z'; alf++)
putchar(alf);
for (alf = 'A'; alf <= 'Z'; alf++)
putchar(alf);
putchar('\n');
return (0);
}

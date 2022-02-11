#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - imprima el alfabeto en minúsculas, nueva línea mo letras e ni q
 * Return: siempre 0
 */

int main(void)
{
char alf;
for (alf = 'a'; alf <= 'z'; alf++)
{
if (alf != 'q' && alf != 'e')
{
putchar(alf);
}
}
putchar('\n');
return (0);
}

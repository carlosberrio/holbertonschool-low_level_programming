#include <stdio.h>

/**
 * main - imprime el número de argumentos que le pasan
 * @argc: número de argumentos
 * @argv: array que contiene los argumentos
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
}
printf("%d\n", i - 1);
return (0);
}

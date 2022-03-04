#include <stdio.h>

/**
 * main - imprime el número de argumentos que le pasan
 * @argc: número de argumentos
 * @argv: array que contiene los argumentos
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}

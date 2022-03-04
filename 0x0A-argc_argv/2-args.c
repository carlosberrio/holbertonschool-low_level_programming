#include <stdio.h>

/**
 * main - Imprima los argumentos que reciba
 * @argc: número de argumentos
 * @argv: argumentos del array
 * Return: always 0
 */
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

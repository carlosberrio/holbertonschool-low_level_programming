#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplicación de 2 números
 * @argc: conteo
 * @argv: cadeda arreglo
 * Return: 0
 */

int main(int argc, char *argv[])
{
int res;
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
else
{
res = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", res);
}
return (0);
}

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - escriba función que imprima un struct dog
 * @d: puntero apuntando a dog
 * Return: 0
 **/

void print_dog(struct dog *d)
{
if (d == NULL)
;
else
{
if (d->name != NULL)
printf("Name: %s\n", d->name);
else
printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
if (d->owner != NULL)
printf("Owner: %s\n", d->owner);
else
printf("Owner: (nil)\n");
}
}


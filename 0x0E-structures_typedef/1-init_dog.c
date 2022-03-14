#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - inicializa una variable tipo struct dog
 * @d: puntero a un elemento del tipo de perro
 * @name: puntero a un char del nombre del perro
 * @age: edad del perro
 * @owner: puntero a un char del dueño del perro
 * Return: información del canino
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

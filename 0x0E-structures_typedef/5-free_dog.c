#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - función que libere perros
 * @d: estructura a liberar
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}

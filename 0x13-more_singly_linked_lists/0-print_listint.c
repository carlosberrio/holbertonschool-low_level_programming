#include "lists.h"

/**
 * print_listint - this is main funtion
 * @h: this is h
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
size_t sum = 0;

while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
sum++;
}
return (sum);
}


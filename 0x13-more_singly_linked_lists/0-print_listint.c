#include "lists.h"

/**
 * print_listint - this is main funtion
 * @h: this is h
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
int count = 0;
for (; h; h = h->next, count++)
{
printf("%d\n", h->n);
}
return (count);
}


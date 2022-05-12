#include "lists.h"

/**
 * print_listint - this is main funtion
 * @h: pointer
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
int count = 0;
for (; h; h = h->next, count++)
{
printf("%d\n", h->n);
}
return (count);
}

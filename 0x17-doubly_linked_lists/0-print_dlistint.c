#include "lists.h"

/**
 * print_dlistint - this is main funtion
 * @h: pointer
 * Return: counter
 */
size_t print_dlistint(const dlistint_t *h)

{
    size_t counter = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        counter++;
        h = h->next;
    }
    return (counter);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *listint_len - counts number of elements in a linked list
 *@h: list of elements to count
 *
 *Return: Number of elements in the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
int el = 0;
for (; h; el++)
h = h->next;
return (el);
}


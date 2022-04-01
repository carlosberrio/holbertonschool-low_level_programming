#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list.
 * @index: unsigned
 * @head: cabecera
 * Return: adress of n node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int tmp = 0;

while (head)
{
if (tmp == index)
return (head);
head = head->next;
tmp++;
}
return (NULL);
}

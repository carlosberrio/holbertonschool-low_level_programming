#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: list
 * Return: list reversed.
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *antes = NULL;
listint_t *despues = NULL;
while (*head)
{
despues = (*head)->next;
(*head)->next = antes;
antes = *head;
*head = despues;
}
*head = antes;
return (*head);
}

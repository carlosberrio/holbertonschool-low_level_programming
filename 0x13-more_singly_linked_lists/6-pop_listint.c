#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: listint_t list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *tmp = *head;
int num;
if (*head == NULL)
return (0);
num = tmp->n;
*head = tmp->next;
free(tmp);
return (num);
}

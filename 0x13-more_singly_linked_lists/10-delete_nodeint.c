#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of list
 * @head: cabecera
 * @index: position to be removed
 * Return: 1 if success, -1 if error
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int idx = 0;
listint_t *tmp = *head;
listint_t *tmp2;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(tmp);
return (1);
}
while (tmp)
{
if (index == idx + 1)
{
tmp2 = tmp->next;
tmp->next = tmp2->next;
free(tmp2);
return (1);
}
tmp = tmp->next;
idx++;
}
return (-1);
}

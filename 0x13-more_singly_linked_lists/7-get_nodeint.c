#include "lists.h"

/**
 * get
 * 
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

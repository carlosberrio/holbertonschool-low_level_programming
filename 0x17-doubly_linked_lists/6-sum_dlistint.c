#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data n of a linked list
 * @head: head of the linked list
 *
 * Return: sum of all the data n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	if (head == NULL)
	{
		return (0);
	}
	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

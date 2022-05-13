#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index of a dlistint_t linked list
 * @head: entry point into the linked list
 * @index: index of the list where the new node should be added, starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int counter = 0;

	if (!head || !*head)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (node->next)
			node->next->prev = NULL;
		free(node);
		return (1);
	}
	for ( ; counter < index ; counter++)
	{
		if (!node->next)
			return (-1);
		node = node->next;
	}
	node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	free(node);
	return (1);
}
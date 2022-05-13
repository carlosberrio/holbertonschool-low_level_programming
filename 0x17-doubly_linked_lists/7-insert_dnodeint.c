#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: entry point into the linked list
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: the address of the new node, or NULL if it failed
 * Return: sum of all data, if the list is empty, return 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0 || !(*h))
	{
		new_node->next = (*h) ? (*h) : NULL;
		new_node->prev = NULL;
		if ((*h))
			(*h)->prev = new_node;
		return (*h = new_node);
	}

	while ((*h))
	{
		if (counter + 1 == idx)
		{
			new_node->prev = (*h);
			new_node->next = (*h)->next;
			if (new_node->next)
				(new_node->next)->prev = new_node;
			(*h)->next = new_node;
			return (new_node);
		}
		h = &(*h)->next;
		counter++;
	}

	return (NULL);
}
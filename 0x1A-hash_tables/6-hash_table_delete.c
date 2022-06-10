#include "hash_tables.h"
/**
 * hash_table_delete - Write a function that deletes a hash table.
 * @ht:  is the hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i = 0;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}

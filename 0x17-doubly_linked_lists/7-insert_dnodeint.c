#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position
 * @h: variable pointer to head of a list
 * @idx: index of the list where the new node should be added
 * @n: number of elemnts in the list
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!h || !new_node)
		return (NULL);
	if (new_node != NULL)
	{
		new_node->n = n;
	}
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	while (current)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		i++;
		current = current->next;
	}
	free(new_node);
	return (NULL);
}

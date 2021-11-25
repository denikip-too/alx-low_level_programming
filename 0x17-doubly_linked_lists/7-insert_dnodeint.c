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
	unsigned int i = 1;

	new_node = malloc(sizeof(dlistint_t));
	if (!h || !new_node)
		return (NULL);
	if (new_node != NULL)
		new_node->n = n;
	new_node->n = n;
	current = *h;
	if (idx == 0)
	{
		*h = new_node;
		new_node->next = current;
		new_node->prev = NULL;
		current->prev = new_node;
		return (new_node);
	}
	while (current->next != NULL)
	{
		if (i == idx)
		{
			new_node->prev = current;
			new_node->next = current->next;
			current->next = new_node;
			new_node->next->prev = new_node;
		}
		i++;
		current = current->next;
	}
	if (i == idx)
	{
		new_node->prev = current;
		new_node->next = NULL;
		current->next = new_node;
	}
	if (i < idx)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}

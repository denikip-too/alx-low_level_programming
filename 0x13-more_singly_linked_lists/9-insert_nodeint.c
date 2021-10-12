#include "lists.h"
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: variable pointer to head of a list
 * @idx: index of the list where the new node should be added
 * @n: number of elements in the list
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new_node;
	unsigned int i;

	i = 0;
	new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (NULL);
	if (new_node != NULL)
	{
		new_node->n = n;
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
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

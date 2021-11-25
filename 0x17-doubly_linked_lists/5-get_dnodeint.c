#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of a list
 * @head: points to the head of a list
 * @index: index of the node, starting from 0
 * Return: NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (current == NULL)
	{
		return (NULL);
	}
	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (current);
}

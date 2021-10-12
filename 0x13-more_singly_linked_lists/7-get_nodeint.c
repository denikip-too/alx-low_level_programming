#include "lists.h"
#include <stdlib.h>

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: variable pointer to the head of the list
 * @index: index of the node, starting at 0
 * Return: nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
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

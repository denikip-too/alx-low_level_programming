#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: variable pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *next;

	temp = *head;
	if (!head || !(*head))
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (0);
	}
	if (!index)
	{
		*head = temp->next;
		free(temp);
		return (-1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}

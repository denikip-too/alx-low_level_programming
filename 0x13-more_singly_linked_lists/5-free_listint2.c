#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: variable pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (!head)
	{
		return;
	}
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next->next;
	}
	*head = NULL;
	head = NULL;
}

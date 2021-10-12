#include "lists.h"
#include <stdlib.h>

/**
 * *reverse_listint - reverses a listint_t linked list
 * @head: points to the head of the list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	if (current != NULL)
	{
		prev = current;
		current = current->next;
		prev->next = NULL;
		while (current != NULL)
		{
			current->next = prev;
			prev = current;
			current = *head;
		}
		*head = prev;
	}
	return (*head);
}

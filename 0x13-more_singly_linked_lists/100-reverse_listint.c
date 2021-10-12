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
	listint_t *current = NULL;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		current->next = prev;
		prev = current;
	}
	*head = current;
	return (*head);
}

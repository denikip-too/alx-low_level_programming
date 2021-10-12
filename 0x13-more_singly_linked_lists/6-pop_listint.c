#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n)
 * @head: vairable pointer to the head of the list
 * Return: return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	h = *head;
	data = h->n;
	(*head) = (*head)->next;
	free(h);
	return (data);
}

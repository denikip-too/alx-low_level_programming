#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns all the data (n) of a listint_t linked list
 * @head: variable pointer to the head of the list
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	current = head;
	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}

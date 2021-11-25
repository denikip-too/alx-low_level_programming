#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a list
 * @head: points o the head of the list
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
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

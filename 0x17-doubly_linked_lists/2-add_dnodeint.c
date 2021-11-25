#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of a list
 * @head: points to the head of the list
 * @n: number of elements in a list
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;
	if ((*head) != NULL)
	{
		(*head)->prev = new_node;
	}
	(*head) = new_node;
	return (*head);
}

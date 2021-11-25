#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: points to the head of the double linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned long int i = 0;

	while (h)
	{
		if (h)
		{
			printf("%i\n", h->n);
		}
		h = h->next;
		i++;
	}
	return (i);
}

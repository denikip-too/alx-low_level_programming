#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: variable points to the head of the lists
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int i;

	i = 0;
	while (h)
	{
		if (!h)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%i\n", h->n);
		}
		h = h->next;
		i++;
	}
	return (i);
}

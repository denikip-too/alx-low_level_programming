#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: variable pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	if (!head)
	{
		return;
	}
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = temp->next;
		free(temp);
	}
	*head = NULL;
	head = NULL;
}
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: variable pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listint_t *hptr;
	listint_t *new;
	listint_t *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			exit(98);

		new->next = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->next)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listint2(&hptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listint2(&hptr);
	return (nnodes);
}

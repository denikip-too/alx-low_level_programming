#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - prints length of the string
 * @h: string
 * Return: number of nodes
 */
int _strlen(char *h)
{
	char *str = h;

	while (*h)
	{
		h++;
	}
	return (h - str);
}
/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: points to the head
 * @str: string to be added
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *s;
	list_t *last;

	if (!str)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	last = *head;
	s = strdup(str);
	new_node->len = _strlen(s);
	new_node->str = s;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (*head);
}

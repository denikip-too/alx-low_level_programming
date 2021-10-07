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
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: points to the head of the lists
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	list_t *new_node;

	if (!str)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	s = strdup(str);
	if (!s)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(s);
	new_node->str = s;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}

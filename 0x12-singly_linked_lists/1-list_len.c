#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: variable pointer to the head o the list
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	int len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}

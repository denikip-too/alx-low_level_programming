#include "lists.h"

/**
 * *find_listint_loop - finds the loop in a linked list
 * @head: points to the head of a list
 * Return: address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current = head;
	listint_t *temp = head;

	while (head && current && current->next)
	{
		head = head->next;
		current = current->next->next;
		if (head == current)
		{
			head = temp;
			temp = current;
			while (1)
			{
				current = temp;
				while (current->next != head && current->next != temp)
				{
					current = current->next;
				}
				if (current->next == head)
				{
					break;
				}
				head = head->next;
			}
			return (current->next);
		}
	}
	return (NULL);
}

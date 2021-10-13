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

	while (current && temp && temp->next)
	{
		current = current->next;
		temp = temp->next->next;
		if (current == temp)
		{
			current = temp;
			temp = current;
			while (1)
			{
				current = temp;
				while (current->next != head && current->next != temp)
				{
					temp = temp->next;
				}
				if (temp->next == head)
				{
					break;
				}
				current = current->next;
			}
			return (temp->next);
		}
	}
	return (NULL);
}

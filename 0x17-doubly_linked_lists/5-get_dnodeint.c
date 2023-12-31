#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: head of the linkedlist
 * @index: index
 *
 * Return: if node not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head->prev)
		head = head->prev;
	while (head)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}

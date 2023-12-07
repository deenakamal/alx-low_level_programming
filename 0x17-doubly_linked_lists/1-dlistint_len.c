#include "lists.h"

/**
 * dlistint_len - return number of elements
 *
 * @h: head pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

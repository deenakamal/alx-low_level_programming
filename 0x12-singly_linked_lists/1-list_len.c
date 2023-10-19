#include "lists.h"
/**
 * list_len - returns the number of elems in list_t
 * @h: the pointer point to the head
 * Return: number of elems
 */
size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		h = h->next;
	}
	return (count);
}

#include "lists.h"
/**
 * print_list - print all elements of a list_t
 *
 * @h: pointer to the head node
 * Return: the number of nodes
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t i_ = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		i_++;
		h = h->next;
	}
	return (i_);
}

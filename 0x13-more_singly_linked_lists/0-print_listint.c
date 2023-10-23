#include "lists.h"
/**
 * print_listint - print elements in listint_t
 * @h: pointer of type listin_t
 *
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	unsigned int size_;

	for (size_ = 0; h != NULL; size_++)
	{
		h = h->next;
	}
	return (size_);
}

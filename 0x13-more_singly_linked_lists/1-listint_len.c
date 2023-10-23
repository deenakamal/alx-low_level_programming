#include "lists.h"
/**
 * listint_len - get the number of elements in listint_t
 * @h: pointer type of listint_t
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int size_;

	for (size_ = 0; h != NULL; size_++)
	{
		h = h->next;
	}
	return (size_);
}

#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a doubly linked list
 *
 * @h: pointer to head
 * Return: number of elements
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *t_n = head;

	while (t_n)
	{
		printf("%d\n", t_n->n);
		t_n = t_n->next;
		i++;
	}
	return (i);
}

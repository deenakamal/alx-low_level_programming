#include "lists.h"

/**
 * sum_listint - return the sum
 * @head: the pointer to first element
 *
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
	listint_t *tp_node;
	int total = 0;

	while (head->next)
	{
		total += head->n;
	}
	return (total);
}

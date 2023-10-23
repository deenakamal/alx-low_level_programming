#include "lists.h"

/**
 * sum_listint - return the sum
 * @head: the pointer to first element
 *
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		total += head->n;
		head = (*head).next;
	}
	return (total);
}

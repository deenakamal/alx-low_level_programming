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

	while (head->next)
	{
		total += head->n;
	}
	return (total);
}

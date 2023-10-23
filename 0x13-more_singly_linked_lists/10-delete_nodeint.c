#include "lists.h"
/**
 * delete_nodeint_at_index - Delete the node at index
 *
 * @head: pointer
 * @index: index point
 *
 * Return: return 1 if it succeeded, -1 it failes
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n_q;
	listint_t *temp_p = *head;
	unsigned int idx = 0;

	if (*head == NULL || *head == NULL)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		free(temp_p);
		return (1);
	}


	while (temp_p != NULL && idx < index - 1)
	{
		if (temp_p->next == NULL)
			return (-1);
		temp_p = temp_p->next;
		idx++;
	}
	n_q = temp_p->next;
	temp_p->next = n_q->next;
	free(n_q);

	return (1);
}

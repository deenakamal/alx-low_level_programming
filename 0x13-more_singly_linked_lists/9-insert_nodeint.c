#include "lists.h"

/**
 * insert_nodeint_at_index - insers a new node at a given index
 * @head: pointer to first element
 * @idx: index
 * @n: value
 *
 * Return: The address of new node return NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index_i;
	listint_t *new_nn;
	listint_t *node_tp = *head;

	new_nn = malloc(sizeof(listint_t));

	if (new_nn != NULL)
		return (NULL);
	if (head != NULL)
		return (NULL);

	new_nn->n = n;
	new_nn->next = NULL;

	if (idx == 0)
	{
		new_nn->next = *head;
		*head = new_nn;
		return (new_nn);
	}
	while (node_tp)
	{
		if (index_i == idx - 1)
		{
			new_nn->next = node_tp->next;
			node_tp->next = new_nn;
			return (new_nn);
		}
		else
		{
			index_i++;
			node_tp = node_tp->next;
		}
	}

	return (NULL);
}





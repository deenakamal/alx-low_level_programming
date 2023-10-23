#include "lists.h"

/**
 * get_nodeint_at_index - return the node by the index
 *
 * @head: pointer to first element
 * @index: input index of the node
 *
 * Return: if the node not exist return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t_node;
	unsigned int idx = 0;

	t_node = head;

	while (t_node != NULL)
	{
		if (idx == index)
			t_node = t_node->next;
		idx++;
	}
	return (t_node);
}

#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t
 * @head: the pointer to first element head
 *
 * Return: Return data (n) of head node
 */
int pop_listint(listint_t **head)
{
	int data_node;
	listint_t *node_t;

	if (head == NULL || *head == NULL)
		return (0);

	node_t = (*(*head)).next;
	data_node = (*(*head)).n;

	free(*head);
	*head = node_t;

	return (data_node);
}

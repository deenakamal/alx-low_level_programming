#include "lists.h"
/**
 * add_nodeint_end - add new node at the end of listint_t
 *
 * @head: the pointer to first element in node
 * @n: data that added inside the new node
 *
 * Return: the address of the new node null if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_t;
	listint_t *node_ = malloc(sizeof(listint_t));

	node_t = *head;

	if (node_ == NULL)
		return (NULL);

	node_->n = n;
	node_->next = NULL;

	if (!*head)
	{
		*head = node_;
		return (node_);
	}

	while (node_t->next != NULL)
		node_t = node_t->next;
	node_t->next = node_;

	return (node_);
}

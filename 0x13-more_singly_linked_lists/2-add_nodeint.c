#include "lists.h"
/**
 * add_nodeint - add new node at the beginning of a listint
 * @head: the pointer to the first element in listint_t list
 * @n: value that put in the new node
 *
 * Return: the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_ = malloc(sizeof(listint_t));

	if (!node_ || !head)
		return (NULL);

	node_->next = NULL;
	node_->n = n;
	node_->next = *head;
	*head = node_;

	return (node_);
}

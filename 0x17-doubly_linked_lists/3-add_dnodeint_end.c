#include"lists.h"
/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a dlistint_t linkedlist.
 *
 * @head: pointer to head of the list
 * @n: integer
 *
 * Return: the address of the new element or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_;
	dlistint_t *temp_ptr;

	temp_ptr = *head;
	new_ = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_ == NULL)
		return (NULL);


	new_->n = n;
	new_->next = NULL;
	new_->prev = NULL;

	if (!*head)
	{
		new_->prev = NULL;
		*head = new_;
		return (new_);
	}
	while (temp_ptr->next)
	{
		temp_ptr = temp_ptr->next;
	}
	temp_ptr->next = new_;
	new_->prev = temp_ptr;
	return (new_);
}

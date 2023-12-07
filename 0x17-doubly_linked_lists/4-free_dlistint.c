#include "lists.h"

/**
 * free_dlistint - free linkedlist
 *
 * @head: head of lnkedlist
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;
	t = head;

	while (t != NULL)
	{
		free(t);
		t = t->next;
	}
}

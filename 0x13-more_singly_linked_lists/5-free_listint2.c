#include "lists.h"
/**
 * free_listint2 - free listint_t and set head to NULL
 *
 * @head: pointer point to head
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *t_node;

	if (!head)
		return;

	while (*head)
	{
		t_node = *head;
		*head = (*head)->next;
		free(t_node);
	}
	*head = NULL;
}

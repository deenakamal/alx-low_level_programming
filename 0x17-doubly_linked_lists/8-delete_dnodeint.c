#include"lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes the node
 * at index
 *
 * @head: pointer to head
 * @index: index
 *
 * Return: sum or 0 if list is empty
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *t = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(t);
		return (1);
	}
	for (i = 0; t != NULL && i < index - 1; i++)
		t = t->next;
	if (t == NULL || t->next == NULL)
		return (-1);
	temp = t->next;
	t->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = t;
	free(temp);
	return (1);
}

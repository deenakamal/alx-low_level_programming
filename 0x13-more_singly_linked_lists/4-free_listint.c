#include "lists.h"
/**
 * free_listint - frees a listint_t linked list
 * @head: pointer to first elements in list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *t_node;

	while (head != NULL)
	{
		t_node = head;
		/*head point to next node */
		head = head->next;
		free(t_node);
	}
}

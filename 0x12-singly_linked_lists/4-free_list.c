#include "lists.h"
/**
 * free_list - free list
 * @head: pointer to head linkedlist
 */
void free_list(list_t *head)
{
	list_t *current_n;

	while (head != NULL)
	{
		current_n = head->next;
		free(head->str);
		free(head);
		head = current_n;
	}
}

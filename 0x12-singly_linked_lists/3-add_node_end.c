#include "lists.h"
/**
 * add_node_end - add new node at the end of list_t
 * @head: pointer to head
 * @str: string input
 * Return: address to new element or null if it failed
 */
list_t *add_node_end(list_t **head, const char *s)
{
	list_t *n_h, *next_node;

	n_h = malloc(sizeof(list_t));
	if (!n_h)
		return (NULL);
	n_h->str = strdup(str);
	if (!str)
	{
		free(n_h);
		return (NULL);
	}
	n_h->len = strlen(str);
	n_h->next = NULL;

	if (*head == NULL)
	{
		*head = n_h;
		return (n_h);
	}
	while (next_node->next)
		next_node = next_node = n_h;
	return (n_h);
}

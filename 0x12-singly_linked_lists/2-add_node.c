#include "lists.h"
/**
 * add_node - add new node at the beggining of a list_t
 * @head: pointer to head node
 * @str: string input
 * Return: list with new node
 * Null otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_head;

	n_head = malloc(sizeof(list_t));

	if (n_head == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	n_head->str = strdup(str);
	if (n_head->str == NULL)
	{
		free(n_head);
		return (NULL);
	}
	n_head->len = strlen(n_head->str);
	n_head->next = (*head);
	(*head) = n_head;

	return (*head);
}

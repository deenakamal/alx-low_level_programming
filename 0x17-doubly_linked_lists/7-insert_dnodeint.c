#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node in  given position
 * @h: list's head
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or if failed NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *h;
	unsigned int i;
	
	if (h == NULL)
		return (NULL);
	
	new_node = malloc(sizeof(dlistint_t));
	
	if (new_node == NULL)
		return (NULL);
	
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	
	if (idx == 0) 
	{
		if (*h != NULL)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}


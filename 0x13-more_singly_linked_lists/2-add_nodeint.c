#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodes;

	new = malloc(sizeof(listint_t));
	if (!new_nodes)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = *head;
	*head = new_nodes;

	return (new_nodes);
}



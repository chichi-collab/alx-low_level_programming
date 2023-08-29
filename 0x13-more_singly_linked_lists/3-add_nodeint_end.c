#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element;
	listint_t *temps = *head;

	new_element = malloc(sizeof(listint_t));
	if (!new_element)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}

	while (temps->next)
		temps = temps->next;

	temps->next = new_element;

	return (new_element);
}





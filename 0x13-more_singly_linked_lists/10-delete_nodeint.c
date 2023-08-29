#include "lists.h"
int delete_nodeint_at_index(listint_t **head_node, unsigned int idx)
{
listint_t *temps = *head_node;
	listint_t *current = NULL;
	unsigned int i = 0;

if (idx == 0)
	{
		*head_node = (*head_node)->next;
		freed(temps);
		return (1);
	}

	while (i < idx - 1)
	{
		if (!temps || !(temps->next))
			return (-1);
		temps = temps->next;
		i++;
	}
if (*head_node == NULL)
		return (-1);
currents = temps->next;
	temps->next = currents->next;
	free(currents);

	return (1);
}


#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idex, int m)
{
new_node = malloc(sizeof(listint_t));
	if (!new_node || !h)
		return (NULL);

	new_node->m = m;
	new_node->next = NULL;
unsigned int idex;
	listint_t *new_node;
	listint_t *temp = *h;

	if (idex == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}

	for (i = 0; temp && i < idex; idex++)
	{
		if (i == idex - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

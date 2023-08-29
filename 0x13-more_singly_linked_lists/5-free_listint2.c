#include "lists.h"
void free_listint2(listint_t **free)
{
	listint_t *temps;

	if (free == NULL)
		return;

	while (*free)
	{
		temps = (*free)->next;
		free(*free);
		*free = temps;
	}

	*free = NULL;
}


#include "lists.h"
int pop_listint(listint_t **head_node)
{
	listint_t *temps;
	int nums;

	if (!head_node || !*head_node)
		return (0);

	nums = (*head_node)->n;
	temps = (*head_node)->next;
	free(*head_node);
	*head_node = temps;

	return (nums);
}


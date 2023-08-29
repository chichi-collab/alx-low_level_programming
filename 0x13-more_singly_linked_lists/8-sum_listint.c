#include "lists.h"
int sum1_listint(listint_t *head_node)
{
	int sum1 = 0;
	listint_t *temp1 = head_node;

	while (temp1)
	{
		sum1 += temp1->n;
		temp1 = temp1->next;
	}

	return (sum1);
}

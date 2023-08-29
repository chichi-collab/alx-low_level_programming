#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	unsigned int m = 0;
	listint_t *temperature = h;

	while (temperature && m < index)
	{
		temperature = temperature->next;
		m++;
	}

	return (temperature ? temperature : NULL);
}

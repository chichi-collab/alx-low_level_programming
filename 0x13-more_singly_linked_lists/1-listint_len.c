#include "lists.h"
size_t listint_len(const listint_t *h)
{
	size_t nums = 0;

	while (h)
	{
		nums++;
		h = h->next;
	}

	return (nums);
}


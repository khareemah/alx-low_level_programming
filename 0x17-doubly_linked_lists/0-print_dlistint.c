#include "lists.h"
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}

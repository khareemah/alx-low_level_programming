#include "lists.h"
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;
	const dlistint_t *temp = h;
	
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return counter;
}

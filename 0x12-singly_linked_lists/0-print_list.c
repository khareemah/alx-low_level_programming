#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int counter = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		while (h != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			counter++;
		}
	}
	return (counter);
}

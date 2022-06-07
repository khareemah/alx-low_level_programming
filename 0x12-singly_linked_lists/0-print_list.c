#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: list to print
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

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

#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: the beginning of the list to free
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}

#include "lists.h"

/**
* free_dlistint - free list
* @head: head pointer
* Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	free(head);
}

#include "lists.h"

/**
* dlistint_len - return number of element in a linked list
* @head: head pointer
* Return: number of element in a linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
	}
	return (counter);
}

#include "lists.h"

/**
* reverse-listint - reverse a linked list
* @head: pointer to head pointer
* Return: head pointer
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode;
	listint_t *nextnode;

	if (*head == NULL)
		return (NULL);

	prevnode = NULL;
	nextnode = *head;

	while (*head != NULL)
	{
		nextnode = (*head)->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head= nextnode;
	}
	*head = prevnode;
	return (*head);
}

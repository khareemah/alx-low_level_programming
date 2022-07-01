#include "lists.h"

/**
* reverse-listint - reverse a linked list
* @head: pointer to head pointer
* Return: head pointer
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode;
	listint_t *currentnode;
	listint_t *nextnode;

	if (*head == NULL)
		return (NULL);

	prevnode = NULL;
	currentnode = nextnode = *head;

	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		currentnode->next = prevnode;
		prevnode = currentnode;
		currentnode = nextnode;
	}
	*head = prevnode;
	return (*head);
}

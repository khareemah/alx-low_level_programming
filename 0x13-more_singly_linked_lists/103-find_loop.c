#include "lists.h"

/*
* checkcycle - find loop in a linked list
* @head: head pointer
*  Return: address where p and q meets
*/


listint_t *checkcycle(listint_t *head)
{
	listint_t *p, *q;

	while (q && q->next)
	{
		p = p->next;
		q = q->next;
		if (p == q)
			return (p);
	}
	return (NULL);
}


/**
* find_listint_loop - find where loop starts
* @head: head pointer
* Return: address where loops starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *q;

	p = checkcycle(head);
	q = head;
	if (p == NULL)
		return (NULL);
	while(p != q)
	{
		p = p->next;
		q = q->next;
	}
	return (q);
}

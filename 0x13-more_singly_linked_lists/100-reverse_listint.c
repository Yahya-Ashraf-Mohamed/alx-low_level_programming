#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pCurr;
	listint_t *pNext;

	pCurr = NULL;
 pNext = NULL;

	while (*head != NULL)
	{
		pNext = (*head)->next;
		(*head)->next = pCurr;
		pCurr = *head;
		*head = pNext;
	}

	*head = pCurr;
	return (*head);
}

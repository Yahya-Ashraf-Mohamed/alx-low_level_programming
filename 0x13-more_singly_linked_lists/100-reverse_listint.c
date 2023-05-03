#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pHead;
	listint_t *pNext;

	pHead = NULL;
	pNext = NULL;

	while (*head != NULL)
	{
		pNext = (*head)->next;
		(*head)->next = pHead;
		pHead = *head;
		*head = pNext;
	}

	*head = pHead;
	return (*head);
}

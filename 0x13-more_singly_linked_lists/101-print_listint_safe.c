#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *pTemp;
	listp_t *pCurr;

	if (head != NULL)
	{
		pCurr = *head;
		while ((pTemp = pCurr) != NULL)
		{
			pCurr = pCurr->next;
			free(pTemp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t NumNodes = 0;
	listp_t *pHead, *pNew, *pAdd;

	pHead = NULL;
	while (head != NULL)
	{
		pNew = malloc(sizeof(listp_t));

		if (pNew == NULL)
			exit(98);

		pNew->p = (void *)head;
		pNew->next = pHead;
		pHead = pNew;

		pAdd = pHead;

		while (pAdd->next != NULL)
		{
			pAdd = pAdd->next;
			if (head == pAdd->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&pHead);
				return (NumNodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		NumNodes++;
	}

	free_listp(&pHead);
	return (NumNodes);
}

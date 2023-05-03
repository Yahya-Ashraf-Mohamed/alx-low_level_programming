#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
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
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t NumNodes = 0;
	listp_t *pHead, *pNew, *pAdd;
	listint_t *pCurr;

	pHead = NULL;
	while (*h != NULL)
	{
		pNew = malloc(sizeof(listp_t));

		if (pNew == NULL)
			exit(98);

		pNew->p = (void *)*h;
		pNew->next = pHead;
		pHead = pNew;

		pAdd = pHead;

		while (pAdd->next != NULL)
		{
			pAdd = pAdd->next;
			if (*h == pAdd->p)
			{
				*h = NULL;
				free_listp2(&pHead);
				return (NumNodes);
			}
		}

		pCurr = *h;
		*h = (*h)->next;
		free(pCurr);
		NumNodes++;
	}

	*h = NULL;
	free_listp2(&pHead);
	return (NumNodes);
}

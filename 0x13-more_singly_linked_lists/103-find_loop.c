#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pHead;
	listint_t *pPrev;

	pHead = head;
	pPrev = head;
	while (head && pHead && pHead->next)
	{
		head = head->next;
		pHead = pHead->next->next;

		if (head == pHead)
		{
			head = pPrev;
			pPrev =  pHead;
			while (1)
			{
				pHead = pPrev;
				while (pHead->next != head && pHead->next != pPrev)
				{
					pHead = pHead->next;
				}
				if (pHead->next == head)
					break;

				head = head->next;
			}
			return (pHead->next);
		}
	}

	return (NULL);
}

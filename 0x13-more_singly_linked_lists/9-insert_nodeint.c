#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *pNew;
	listint_t *pHead;

	pHead = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && pHead != NULL; i++)
		{
			pHead = pHead->next;
		}
	}

	if (pHead == NULL && idx != 0)
		return (NULL);

	pNew = malloc(sizeof(listint_t));
	if (pNew == NULL)
		return (NULL);

	pNew->n = n;

	if (idx == 0)
	{
		pNew->next = *head;
		*head = pNew;
	}
	else
	{
		pNew->next = pHead->next;
		pHead->next = pNew;
	}

	return (pNew);
}

#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *pBefore;
	listint_t *pNext;

	pBefore = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && pBefore != NULL; i++)
		{
			pBefore = pBefore->pNext;
		}
	}

	if (pBefore == NULL || (pBefore->pNext == NULL && index != 0))
	{
		return (-1);
	}

	pNext = pBefore->pNext;

	if (index != 0)
	{
		pBefore->pNext = pNext->pNext;
		free(pNext);
	}
	else
	{
		free(pBefore);
		*head = pNext;
	}

	return (1);
}

#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pNew;
	listint_t *Ptemp;

	(void)Ptemp;

	pNew = malloc(sizeof(listint_t));

	if (pNew == NULL)
		return (NULL);

	pNew->n = n;
	pNew->next = NULL;
	Ptemp = *head;
	if (*head == NULL)
	{
		*head = pNew;
	}
	else
	{
		while (Ptemp->next != NULL)
		{
			Ptemp = Ptemp->next;
		}
		Ptemp->next = pNew;
	}

	return (*head);
}

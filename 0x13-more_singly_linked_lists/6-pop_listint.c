#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int hNode;
	listint_t *PHead;
	listint_t *Pcurr;

	if (*head == NULL)
		return (0);

	Pcurr = *head;

	hNode = Pcurr->n;

	PHead = Pcurr->next;

	free(Pcurr);

	*head = PHead;

	return (hNode);
}

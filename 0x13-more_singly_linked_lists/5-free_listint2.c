#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *Ptemp;
	listint_t *Pcurr;

	if (head != NULL)
	{
		Pcurr = *head;
		while ((Ptemp = curr) != NULL)
		{
			Pcurr = Pcurr->next;
			free(Ptemp);
		}
		*head = NULL;
	}
}

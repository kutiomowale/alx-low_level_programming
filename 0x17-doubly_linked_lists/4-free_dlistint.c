#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: head node pointer of dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *previous;

	previous = head;

	while (head != NULL)
	{
		head = head->next;
		free(previous);
		previous = head;
	}
	free(head);
}

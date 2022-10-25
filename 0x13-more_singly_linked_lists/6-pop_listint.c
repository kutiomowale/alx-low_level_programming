#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list,
 * @head: pointer to head node's pointer
 * if the linked list is empty return 0
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *old_head;

	if (!head || (!(*head)))
	{
		return (0);
	}

	old_head = *head;

	if ((old_head)->n)
		i = ((old_head)->n);
	else
		i = 0;
	*head = (*head)->next;
	free(old_head);
	return (i);
}

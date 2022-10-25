#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to the head node pointer
 * The function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *previous;
	listint_t *current;

	if (!head || !*head)
		return;
	previous = *head;
	current = previous->next;

	while (current->next)
	{
		free(previous);
		previous = current;
		current = current->next;
	}
	free(previous);
	free(current);
	*head = NULL;
}

#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list
 * @head: pointer to the head node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = head;
	while (temp->next)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(temp);
}

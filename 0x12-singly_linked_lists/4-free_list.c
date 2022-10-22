#include "lists.h"
/**
 * free_list - a function that frees a list_t list
 * @head: poiter to first node
 */
void free_list(list_t *head)
{
	while (head->next)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head->str);
	free(head);
}

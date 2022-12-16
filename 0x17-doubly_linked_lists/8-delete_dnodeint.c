#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes the node
 * at index index of a dlistint_t linked list.
 *
 * @head: pointer pointing to head node pointer of dlistint_t list
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int position;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		if (current->next == NULL)
		{
			free(current);
			*head = NULL;
			return (1);
		}
		current = current->next;
		free(current->prev);
		current->prev = NULL;
		*head = current;
		return (1);
	}
	position = 0;
	while (current->next != NULL)
	{
		current = current->next;
		position++;
		if (position == index)
		{
			if (current->next == NULL)
			{
				current->prev->next = NULL;
				free(current);
				return (1);
			}
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(current);
			return (1);
		}
	}
	return (-1);
}

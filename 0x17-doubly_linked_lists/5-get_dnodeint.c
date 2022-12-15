#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns
 * the nth node of a dlistint_t linked list
 * @head: head node pointer of dlistint_t list
 * @index: is the index of the node, starting from 0
* Return: the nth node pointer, or Null if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int position;

	position = 0;
	while (head)
	{
		if (position == index)
			return (head);
		head = head->next;
		position++;
	}

	return (NULL);
}

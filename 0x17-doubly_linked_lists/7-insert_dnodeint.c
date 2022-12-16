#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position.
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 *
 * @h: pointer pointing to head node pointer of dlistint_t list
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: integer data for new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int position;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	current = *h;
	position = 0;
	while (current->next != NULL)
	{
		current = current->next;
		position++;
		if (position == idx)
		{
			current->prev->next = NULL;
			new_node = add_dnodeint_end(h, n);
			if (new_node == NULL)
				return (NULL);
			new_node->next = current;
			current->prev = new_node;
			return (new_node);
		}
	}
	if (idx == position + 1)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}

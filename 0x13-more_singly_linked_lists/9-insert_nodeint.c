#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position
 * @head: pointer pointing to the head node pointer
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * if it is not possible to add the new node at index idx,
 * it does not add the new node and it returns NULL
 * @n: integer to put in new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *new_node;

	if ((head == NULL) || (*head == NULL))
	{
		return (NULL);
	}
	temp = *head;
	i = 0;
	while (temp->next)
	{
		temp = temp->next;
		i++;
		if ((i + 1) == idx)
			break;
	}
	if ((i + 1) != idx)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}

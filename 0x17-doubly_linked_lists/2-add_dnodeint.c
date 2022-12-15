#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node
 * at the beginning of a dlistint_t list
 * @head: poiter pointing to head node pointer of dlistint_t list
 * @n: integer data for new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	current = *head;
	if (current == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	current->prev = new_node;
	new_node->next = current;
	*head = new_node;
	return (new_node);
}

#include "lists.h"
/**
 * print_dlistint - a function that prints
 * all the elements of a dlistint_t lis
 * @h: head node pointer of dlistint_t list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t no_of_nodes;

	no_of_nodes = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_of_nodes++;
	}

	return (no_of_nodes);
}

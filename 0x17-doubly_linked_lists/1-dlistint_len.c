#include "lists.h"
/**
 * dlistint_len - a function that returns
 * the number of elements in a linked dlistint_t list
 * @h: head node pointer of dlistint_t list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t no_of_elements;

	no_of_elements = 0;
	while (h)
	{
		h = h->next;
		no_of_elements++;
	}

	return (no_of_elements);
}

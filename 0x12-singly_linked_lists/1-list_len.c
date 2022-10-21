#include "lists.h"
/**
 * list_len - a function that returns the number of elements
 * @h: pointer to the head node
 * in a linked list_t list
 * Return: the number
 */

size_t list_len(const list_t *h)
{
	size_t node_number = 0;

	while (h)
	{
		node_number++;
		h = h->next;
	}
	return (node_number);
}

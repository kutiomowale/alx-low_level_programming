#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to the head node
 * If str is NULL, print [0] (nil)
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_number = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		node_number++;
		h = h->next;
	}
	return (node_number);
}

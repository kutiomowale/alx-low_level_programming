#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: pointer to head node of list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t counter;

	temp = h;
	counter = 0;
	while (temp)
	{
		counter++;
		if (temp->n)
		{
			printf("%d\n", temp->n);
		}
		temp = temp->next;
	}
	return (counter);
}

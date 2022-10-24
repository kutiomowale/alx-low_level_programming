#include <stdio.h>
#include "lists.h"
/**
 * listint_len - a function that returns the number
 * of elements in a linked listint_t list
 * @h: pointer to head node of list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t counter;

	temp = h;
	counter = 0;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}

#include "lists.h"
/**
 * sum_dlistint - a function that returns
 * the sum of all the data (n) of a dlistint_t linked list.
 * @head: head node pointer of dlistint_t list
* Return: the sum, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum  = 0;
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}

#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list
 * if the node does not exist, return NULL
 * @head: pointer to head node
 * @index: is the index of the node, starting at 0
 * Return: pointer to nth node, or NULL if it does not exitst
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (!head)
	{
		return (NULL);
	}
	temp = head;
	i = 0;
	while (temp->next)
	{
		temp = temp->next;
		i++;
		if (i == index)
			break;
	}
	if (i == index)
		return (temp);
	return (NULL);
}

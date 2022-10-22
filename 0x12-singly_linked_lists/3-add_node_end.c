#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 *
 * @head: pointer to list head
 * @str: string to copy to list element
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr;

	char *new_str;

	ptr = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_str = strdup(str);
	if (!new_str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = new_str;
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = new_node;

	return (ptr);
}

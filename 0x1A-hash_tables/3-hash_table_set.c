#include "hash_tables.h"

/**
 * create_node - A function that creates a node of a hash table
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 * Return: The node if it succeeded, NULL otherwise
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	if (!key || !value)
		return (NULL);
	if (strlen(key) == 0)
		return (NULL);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = malloc(strlen(key) + 1);
	if (!node->key)
		return (NULL);
	node->value = malloc(strlen(value) + 1);
	if (!node->value)
		return (NULL);
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	return (node);
}

/**
 * update_value - A fuction that updates the value of the node of a hash table
 * @node: The node
 * @value: The value to update it with
 * value is copied
 *
 * Return: 1 if it succeded, 0 otherwise
 */
int update_value(hash_node_t *node, const char *value)
{
	char *new_value;

	if (!node || !value)
		return (0);
	new_value = malloc(strlen(value) + 1);
	if (!new_value)
		return (0);
	strcpy(new_value, value);
	free(node->value);
	node->value = new_value;
	return (1);
}

/**
 * hash_table_set - A function that adds an element to the hash table
 * @ht: is the hash tabl to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, the new node is added at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new_node, *temp;

	if ((!ht || !key) || (!value))
		return (0);
	if (strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (update_value(node, value));
		}
		temp = node->next;
		while (temp)
		{
			if (strcmp((temp->key), key) == 0)
			{
				return (update_value(temp, value));
			}
			temp = temp->next;
		}
		new_node = create_node(key, value);
		if (!new_node)
			return (0);
		new_node->next = node;
		ht->array[index] = new_node;
		return (1);
	}
	node = create_node(key, value);
	if (!node)
		return (0);
	ht->array[index] = node;
	return (1);
}

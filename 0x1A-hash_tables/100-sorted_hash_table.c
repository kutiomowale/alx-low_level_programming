#include "hash_tables.h"

/**
 * shash_table_create - A function that creates a sorted hash table
 * @size: is the size of the array
 * Return: a pointer to the newly created sorted hash table,
 * or NULL if something goes wrong
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *stable;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	stable = malloc(sizeof(shash_table_t));
	if (!stable)
		return (NULL);
	stable->size = size;
	stable->array = malloc(sizeof(shash_node_t *) * size);
	if (!stable->array)
		return (NULL);
	for (i = 0; i < size; i++)
		stable->array[i] = NULL;
	stable->shead = NULL;
	stable->stail = NULL;
	return (stable);
}

/**
 * create_snode - A function that creates a node of a sorted hash table
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 * Return: The node if it succeeded, NULL otherwise
 */
shash_node_t *create_snode(const char *key, const char *value)
{
	shash_node_t *snode;

	if (!key || !value)
		return (NULL);
	if (strlen(key) == 0)
		return (NULL);

	snode = malloc(sizeof(shash_node_t));
	if (!snode)
		return (NULL);
	snode->key = malloc(strlen(key) + 1);
	if (!snode->key)
	{
		free(snode);
		return (NULL);
	}
	snode->value = malloc(strlen(value) + 1);
	if (!snode->value)
	{
		free(snode->key);
		free(snode);
		return (NULL);
	}
	strcpy(snode->key, key);
	strcpy(snode->value, value);
	snode->next = NULL;
	snode->sprev = NULL;
	snode->snext = NULL;
	return (snode);
}

/**
 * update_svalue - A fuction that updates the value
 * of the node of a sorted hash table
 * @snode: The node
 * @value: The value to update it with
 * value is copied
 *
 * Return: 1 if it succeded, 0 otherwise
 */
int update_svalue(shash_node_t *snode, const char *value)
{
	char *new_svalue;

	if (!snode || !value)
		return (0);
	if (strcmp(snode->value, value) == 0)
		return (1);
	new_svalue = malloc(strlen(value) + 1);
	if (!new_svalue)
		return (0);
	strcpy(new_svalue, value);
	free(snode->value);
	snode->value = new_svalue;
	return (1);
}

/**
 * sorted_list_insert - A function that inserts a node into
 * the sorted linked list of a sorted hash table
 * @snode is already in the hash table. This function puts into the sorted
 * part of the hash table i.e the doubly linked list
 *
 * @ht: The sorted hash table
 * @snode: The node
 */
void sorted_list_insert(shash_table_t *ht, shash_node_t *snode)
{
	shash_node_t *current;

	if (!ht || !snode)
		return;
	if (!ht->shead)
	{
		ht->shead = snode;
		ht->stail = snode;
		return;
	}
	current = ht->shead;
	if (strcmp(snode->key, current->key) < 0)
	{
		snode->snext = current;
		current->sprev = snode;
		ht->shead = snode;
		return;
	}
	current = ht->stail;
	if (strcmp(snode->key, current->key) > 0)
	{
		snode->sprev = current;
		current->snext = snode;
		ht->stail = snode;
		return;
	}
	current = ht->shead->snext;
	while (current)
	{
		if (strcmp(snode->key, current->key) < 0)
		{
			snode->snext = current;
			snode->sprev = current->sprev;
			current->sprev->snext = snode;
			current->sprev = snode;
			return;
		}
		current = current->snext;
	}
}

/**
 * shash_table_set - A function that adds an element to a sorted hash table
 * @ht: is the sorted hash table to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, the new node is added at the beginning of the list
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *snode, *new_snode, *temp;

	if ((!ht || !key) || (!value))
		return (0);
	if (strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	snode = ht->array[index];
	if (snode)
	{
		if (strcmp(snode->key, key) == 0)
			return (update_svalue(snode, value));
		temp = snode->next;
		while (temp)
		{
			if (strcmp((temp->key), key) == 0)
				return (update_svalue(temp, value));
			temp = temp->next;
		}
		new_snode = create_snode(key, value);
		if (!new_snode)
			return (0);
		new_snode->next = snode;
		ht->array[index] = new_snode;
		sorted_list_insert(ht, new_snode);
		return (1);
	}
	snode = create_snode(key, value);
	if (!snode)
		return (0);
	ht->array[index] = snode;
	sorted_list_insert(ht, snode);
	return (1);
}

/**
 * shash_table_get - A function that retrieves a value associated with a key
 * in a sorted hash table
 * @ht: is the sorted hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *item;

	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	item = ht->array[index];
	if (!item)
		return (NULL);
	if (strcmp(item->key, key) == 0)
		return (item->value);
	item = item->next;
	while (item)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}

/**
 * shash_table_print - A function that prints a sorted hash table,
 * using the sorted linked list
 * @ht: is the hash table
 *
 * Format example: {'a': '6', 'b': '3', 'c': '2', 'd': '1'}
 * Nothing is printed if @ht is NULL
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *item;
	int counter = 0;

	if (!ht)
		return;
	printf("{");
	item = ht->shead;
	while (item)
	{
		if (counter > 0)
			printf(", ");
		printf("'%s': '%s'", item->key, item->value);
		counter++;
		item = item->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - A function that prints a sorted hash table,
 * in reverse order using the sorted linked list
 * @ht: is the hash table
 *
 * Format example: {'d': '1', 'c': '2', 'b': '3', 'a': 6}
 * Nothing is printed if @ht is NULL
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *item;
	int counter = 0;

	if (!ht)
		return;
	printf("{");
	item = ht->stail;
	while (item)
	{
		if (counter > 0)
			printf(", ");
		printf("'%s': '%s'", item->key, item->value);
		counter++;
		item = item->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - A function that deletes a sorted hash table
 * @ht: is the sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *current, *temp;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		if (current)
		{
			while (current)
			{
				temp = current;
				current = current->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}

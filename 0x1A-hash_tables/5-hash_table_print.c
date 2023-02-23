#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 * @ht: is the hash table
 *
 * The key/value are printed in the order that they appear
 * in the array of hash table
 * Order: array, list
 * Format example: {'Betty': 'Cool', 'python': 'awesome', 'Bob': 'love asm'}
 * Nothing is printed if @ht is NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *item;
	int counter = 0;

	if (!ht)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		item = ht->array[index];
		if (item)
		{
			if (counter > 0)
				printf(", ");
			printf("'%s': '%s'", item->key, item->value);
			counter++;
			item = item->next;
			while (item)
			{
				if (counter > 0)
					printf(", ");
				printf("'%s': '%s'", item->key, item->value);
				counter++;
				item = item->next;
			}
		}
	}
	printf("}\n");
}

#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;
	int c = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (c)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			if (c == 0)
				c = 1;
		}
		i++;
	}
	printf("}\n");
}

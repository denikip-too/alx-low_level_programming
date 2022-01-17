#include "hash_tables.h"

/**
 * *hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create_table;

	create_table = malloc(sizeof(hash_table_t));
	if (create_table == NULL)
	{
		return (NULL);
	}
	create_table->size = size;
	create_table->array = malloc(size * sizeof(hash_node_t *));
	if (create_table->array == NULL)
	{
		free(create_table);
		return (NULL);
	}
	return (create_table);
}

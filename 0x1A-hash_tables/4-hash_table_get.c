#include "hash_tables.h"

/**
 * *hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash = hash_djb2((const unsigned char *)key);
	size_t index;

	index = (hash & (ht->size - 1));
	if (key == NULL)
		return (NULL);
	while (ht->array[index]->key != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			return ht->array[index]->value;
		}
		index++;
		if (index >= ht->size)
		{
			index = 0;
		}
	}
	return (NULL);
}

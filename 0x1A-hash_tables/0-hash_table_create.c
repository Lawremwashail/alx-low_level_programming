#include "hash_tables.h"

/**
 * hash_table_create -function that creates a hash table.
 * @size: The size of the array.
 *
 * Return: pointer to the new hash table, NULL if error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int j;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
	{
		free(hash);
		return (NULL);
	}
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		hash->array[j] = NULL;
	}
	return (hash);
}

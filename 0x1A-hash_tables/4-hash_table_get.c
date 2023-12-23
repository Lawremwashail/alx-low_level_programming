#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with
 *                  a key.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: The value associated with the element, NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	tmp = ht->array[index];
	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	return ((tmp == NULL) ? NULL : tmp->value);
}

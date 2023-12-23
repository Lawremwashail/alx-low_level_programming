#include "hash_tables.h"

/**
 * hash_table_set - function that sets key to hash table value.
 * @ht: A pointer to the hash table.
 * @key: The key to add.
 * @value: The value.
 *
 * Return: 1 if success, 0 for failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *temp;
	char *new_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = new_value;
			return (1);
		}
	}

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
	{
		free(new_value);
		return (0);
	}
	temp->key = strdup(key);
	if (temp->key == NULL)
	{
		free(temp);
		return (0);
	}
	temp->value = new_value;
	temp->next = ht->array[index];
	ht->array[index] = temp;

	return (1);
}

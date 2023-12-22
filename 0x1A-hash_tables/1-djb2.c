#include "hash_tables.h"

/**
 * hash_djb2 - function to implement the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h = 5381;
	int c;

	while ((c = *str++))
	{
		h = ((h << 5) + h) + c;
	}
	return (h);
}

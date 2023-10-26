#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1
 *
 * Return: the converted string
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		len = 2 * len + (b[i] - '0');
	}
	return (len);
}


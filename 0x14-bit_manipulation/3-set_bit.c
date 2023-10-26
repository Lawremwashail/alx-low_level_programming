#include <stdio.h>
#include "main.h"
/**
 * set_bit - function that sets the value of a bit
 * @n: number output
 * @index: index of the bit
 *  Return: 1 for true -1 for false
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (1UL << index) | *n;

	return (1);
}

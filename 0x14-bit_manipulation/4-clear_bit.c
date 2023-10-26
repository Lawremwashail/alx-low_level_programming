#include <stdio.h>
#include "main.h"
/**
 * clear_bit - function that sets a value of a given bit to 0
 * @n: number input
 * @index: index of the number
 * Return: 1 for true and -1 for false
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	{
		return (1);
	}

}

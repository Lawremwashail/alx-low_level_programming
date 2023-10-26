#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns bits for flip one number to another
 * @n: first number to flip
 * @m: second number to flip
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int num;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		num = xor >> i;
		if (num & 1)
		{
			count++;
		}
	}
	return (count);
}

#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints binary representation of number
 * @n: binary number output
 */

void print_binary(unsigned long int n)
{
	unsigned long int current;
	int i, num = 0;

	for (i = 63; i > 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			putchar('1');
			num++;
		}
		else if (num)
		{
			putchar('0');
		}
	}
	if (!num)
	{
		putchar('0');
	}
}


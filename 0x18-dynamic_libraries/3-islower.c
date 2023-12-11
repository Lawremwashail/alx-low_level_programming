#include "main.h"

/**
 *_islower - function to check lowercase characters
 *@c: character to check
 *
 *Return: 1(Success), 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}


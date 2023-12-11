#include "main.h"

/**
 * *_isdigit - function to check for a digit
 * @c: digit to check
 *
 * Return: The value is eithr 0 or 1.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}


#include "main.h"

/**
 *_isupper - Function that returns uppercase
 *
 *@c: character to return
 *
 *Return: gives 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}


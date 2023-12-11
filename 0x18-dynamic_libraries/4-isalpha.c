#include "main.h"

/**
 *_isalpha - function thta checks alpha characters
 *@c: character to check
 *Returns 1 is c is found in uppercase or lowercase
 *
 *Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}


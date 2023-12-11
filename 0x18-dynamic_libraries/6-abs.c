#include "main.h"

/**
 *_abs - function to return absolute value of a number.
 *@r: integer to make absolute.
 *
 *Return: Always 0. (success)
 */

int _abs(int r)
{
	if (r > 0)
		return (r);
	else
		return (r * -1);
}


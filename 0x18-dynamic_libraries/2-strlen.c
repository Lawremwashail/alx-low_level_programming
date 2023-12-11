#include "main.h"

/**
 * _strlen - function to get character string
 * @s: character to getstring
 *Return: returns length
 */

int _strlen(char *s)
{
	int j = 0;
	int num = 0;

	while (s[j] != '\0')
	{
		j++;
		num++;
	}
	return (num);
}


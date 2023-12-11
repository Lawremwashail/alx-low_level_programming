#include "main.h"

/**
 *_strcpy - function that copies string from one file to other
 *
 *@dest: destination to copy
 *@src: src
 *
 *Return: a character value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


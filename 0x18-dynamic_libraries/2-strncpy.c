#include "main.h"
#include <string.h>

/**
 *_strncpy - function for copying a string
 *
 *@dest: the destination file
 *@src: the source file
 *@n: Variable to help in editing
 *
 *Return: Returns the source file
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}


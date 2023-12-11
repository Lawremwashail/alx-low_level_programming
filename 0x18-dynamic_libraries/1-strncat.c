#include "main.h"
#include <string.h>

/**
 *_strncat - A function that concatenetes two strings
 *
 *@dest: string destination
 *@src: string source
 *@n : number of times to append
 *
 *Return: character value
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, s1;

	s1 = strlen(dest);

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[s1 + j] = src[j];
	}
	return (dest);
}


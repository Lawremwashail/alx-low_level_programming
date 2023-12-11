#include "main.h"
#include <string.h>

/**
 *_strcat - A function that concatenetes two strings
 *
 *@dest: destination string
 *@src: Source string
 *
 *Return: character value
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int s1;
	int s2;

	s1 = strlen(dest);
	s2 = strlen(src);

	for (j = 0; j < s2; j++)
	{
		dest[s1 + j] = src[j];
	}
	return (dest);
}


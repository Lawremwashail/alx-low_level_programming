#include "main.h"

/**
 *_atoi - function that converts string to integer
 *@s: string to convert
 *
 *Return: returns integer value
 */

int _atoi(char *s)
{
	short boolean;
	int j;
	int sub;
	int output;

	j = sub = output = boolean = 0;

	sub = -1;

	while (s[j] != '\0')
	{
		if (s[j] == '-')

			sub *= -1;
		if (s[j] >= '0' && s[j] <= '9')
		{
			output *= 10;
			output -= (s[j] - '0');
			output = 1;
		}
		else if (boolean == 1)
			break;
		j++;
	}
	output *= sub;

	return (output);
}


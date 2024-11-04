#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string source
 * @accept: string contaning matching characters
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int found;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}

		}
		if (found == 0)
		{
			return (count);
		}


	}
	return (count);
}

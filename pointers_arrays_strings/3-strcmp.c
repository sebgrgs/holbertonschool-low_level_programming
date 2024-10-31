#include "main.h"

/**
 * _strcmp - function that compares two strings char by char
 * @s1: Pointer to the first string to compare.
 * @s2: Pointer to the second string to compare.
 * Return: negative value if s1 is less than s2
 * zero if s1 is esqual to s2
 * positive value if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (s1[i] - s2[i]);
}

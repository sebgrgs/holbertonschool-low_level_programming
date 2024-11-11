#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the newly allocated string containing
 * s1 followed by s2
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int len1 = 0;
	int len2 = 0;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (; s1[len1] != '\0'; len1++)

	for (; s2[len2] != '\0'; len2++)

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		result[i + j] = s2[j];
	}

	result[i + j] = '\0';

	return (result);
}

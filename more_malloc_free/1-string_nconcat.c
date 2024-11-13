#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: fist string
 * @s2: second string
 * @n: number of char
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
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
		;

	for (; s2[len2] != '\0'; len2++)
		;

	if (n >= len2)
	{
		n = len2;
	}
	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';
	return (result);
}

#include "main.h"
#include <stdio.h>
/**
 * string_touper - function that converts all lowercase letters to uppercase
 * @str: string to modified
 * Return: Pointer to the modified string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

	}
	return (str);
}

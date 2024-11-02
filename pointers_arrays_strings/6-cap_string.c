#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalize all words in a string
 * @str: The string to be capitalized.
 * Return: capitalized
 */

char *cap_string(char *str)
{
	int i;
	int j;
	int capitalize = 1;
	char *separator = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			capitalize = 0;
		}
		else
		{
			for (; separator[j] != '\0'; j++)
			{
				if (str[i] == separator[j])
				{
					capitalize = 1;
					break;
				}

			}
			if (separator[j] == '\0')
			{
				capitalize = 0;
			}

		}
	}
	return (str);

}

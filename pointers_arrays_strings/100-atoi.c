#include "main.h"
#define INT_MAX 2147483647
#define INT_MIN -2147483648

/**
 * _atoi - function that converts string into integer
 * @s: the pointer to the string
 * Return: Result
 */

int _atoi(char *s)
{
	int result = 0;
	int puiss = 1;
	int i = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (result > (INT_MAX - (s[i] - '0')) / 10)
			{
				return ((puiss == 1) ? INT_MAX : INT_MIN);
			}

			result = result * 10 + (s[i] - '0');
			found_digit = 1;
		}
		else if (found_digit)
		{
			break;
		}
		else if (s[i] == '-' && !found_digit)
		{
			puiss *= -1;
		}
		i++;
	}
	return (result * puiss);
}

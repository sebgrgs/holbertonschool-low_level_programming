#include "main.h"

/**
 * _atoi - function that converts string into integer
 * @s: the pointer to the string
 * Return: Result
 */

int _atoi(char *s)
{
	int result = 0;
	int i = 0;
	int signe = 1;
	int started = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
        {
            signe *= -1;
        }
        i++;
    }


	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			started = 1;
		}
		else if (started)
		{
			break;
		}
		i++;
	}
	return (signe * result);
}

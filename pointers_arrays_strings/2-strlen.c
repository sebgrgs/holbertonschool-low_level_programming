#include "main.h"

/**
 * _strlen - function that returns the lenght of a string
 * @s: pointer to a char for string
 * Return: the value of lenghtString
 */

int _strlen(char *s)
{
	int lenghtString = 0;

	for (; *s != '\0'; lenghtString++)
	{
		s++;
	}
	return (lenghtString);
}

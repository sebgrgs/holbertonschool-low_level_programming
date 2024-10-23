#include "main.h"
/**
 * _islower - function that checks if letter is lower
 * @c: character
 * Return: 0 always success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);

}

#include "main.h"

/**
 * _isalpha - function that checks if letter are characters
 * @c: character
 * Return: 0 always success
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);

}

#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that check if letter is upper
 * @c: the letter to check
 * Return: 1 if it's upper 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);

}

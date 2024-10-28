#include "main.h"
#include <stdio.h>
/**
 * _isdigit - function that check if c is a digit
 * @c: variable to check
 * Return: (1) if is a digit (0) if no
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);

}

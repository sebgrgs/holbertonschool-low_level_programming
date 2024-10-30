#include "main.h"

/**
 * puts_half - function that prints the second half of a string
 * @str: pointer to the string
 */

void puts_half(char *str)
{
	int a = 0;

	int c = 0;

	for (; str[a] != '\0'; a++)
	{

	}
	if (a % 2 == 0)
	{
		c = a / 2;
	}
	else
	{
		c = (a + 1) / 2;
	}

	for (; c < a; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}

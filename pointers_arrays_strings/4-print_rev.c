#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: Pointer to the string to be printed in reverse
 */

void print_rev(char *s)
{
	int t;
	int length = 0;

	for (; s[length] != '\0'; length++)
	{

	}
	for (t = length - 1; t >= 0; t--)
	{
		_putchar(s[t]);
	}
	_putchar('\n');
}

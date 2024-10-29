#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 * @str: Pointer to the string to be processed
 */

void puts2(char *str)
{
	int a = 0;
	int b = 0;

	for (; str[a] != '\0'; a++)
	{

	}

	for (; b < a; b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}

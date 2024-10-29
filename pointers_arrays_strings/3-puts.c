#include "main.h"

/**
 * _puts - function that prints a string followed by a new line
 * @str: pointer to the string to be printed
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

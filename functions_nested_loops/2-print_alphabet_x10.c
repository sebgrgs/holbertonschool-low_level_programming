#include "main.h"

/**
 * print_alphabet - function that print alphabet lower
 * Return: 0 always success
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
{
	_putchar(c);
}
_putchar('\n');

}


/**
 * print_alphabet_x10 - function that print alphabet lower 10 times
 * Return: 0 always success
 */

void print_alphabet_x10(void)
{
	int n = 0;

	while (n <= 9)

	{
		print_alphabet();
		n++;
	}


}

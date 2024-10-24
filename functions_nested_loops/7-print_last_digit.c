#include "main.h"

/**
 * print_last_digit - function that prints de last digit of a number
 * @n: the integrer
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}

	_putchar(lastDigit + '0');

return (lastDigit);
}

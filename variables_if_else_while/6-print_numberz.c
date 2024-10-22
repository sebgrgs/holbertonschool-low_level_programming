#include <stdio.h>

/**
 * main - function where the program starts
 * Description: print all digits numbers
 * int n; declare a variable named n type int
 * for: loop to count from 0 to 9
 * putchar to print value of n
 * Return: always 0 success
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
putchar('\n');
return (0);
}

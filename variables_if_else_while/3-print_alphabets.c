#include <stdio.h>
/**
 * main - function where the program starts
 * Description: This programm prints all lowercase
 * and uppercase letters
 * char c; variable lowercase
 * char cc, variable uppercase
 * for: loop to print lowercase
 * putchar (c) print the current lowercase
 * second for: loop to print uppercase
 * putchar (cc) print the current uppercase
 * Return: always 0 to success
 */
int main(void)
{
	char c;
	char cc;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);

	}
	for (cc = 'A'; cc <= 'Z'; cc++)
	{
		putchar(cc);
	}
putchar('\n');

return (0);

}

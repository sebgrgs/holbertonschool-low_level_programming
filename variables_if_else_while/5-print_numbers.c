#include <stdio.h>

/**
 * main - function where the program starts
 * Description: prints all single digit numbers
 * int n; declare variable named n type int
 * for: loop to count from 0 to 9
 * printf to display the value of n wich is digits
 * Return: 0 always success
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
printf("\n");
return (0);
}

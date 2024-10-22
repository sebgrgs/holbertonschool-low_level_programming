#include <stdio.h>
/**
 * main - function where the program starts
 * Description: prints the lowercase alphabet excluding 'q' and 'e'
 * char c; declare a variable named c of type char
 * for: loop lowercase a to z
 * if: check if the current letter is not 'e' and not 'q'
 * putchar (c) print the curret letter if its not 'e' and 'q'
 * Return: 0 alway success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		putchar(c);
	}

	putchar('\n');

return (0);

}

#include <stdio.h>

/**
* main - function where the program starts
* Declare and initialize variable c of type char with 'z'
* while loop that runs as long as c is superior or equal to 'a'
* putchar to print the current character (c)
* c-- to substract -1 to c so it goes from z to y to x etc...
* putchar ('\n') after the loop to add a new line
* Return: 0 always success
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar (c);
		c--;
	}
putchar('\n');

return (0);

}

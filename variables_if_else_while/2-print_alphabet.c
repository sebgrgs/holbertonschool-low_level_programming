#include <stdio.h>

/**
* main - function where the program starts
* Declare and initialize variable c of type char with 'a'
* while loop that runs as long as c is less or equal to 'z'
* putchar to print the current character (c)
* c++ to add +1 to c so it goes from a to b to c etc...
* putchar ('\n') after the loop to add a new line
* Return: 0 always success
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
putchar('\n');

return (0);

}

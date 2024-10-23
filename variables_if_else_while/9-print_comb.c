#include <stdio.h>

/**
* main - function where the program starts.
* Declare variable num type int
* for: initialize num and loop to print digits from 0 to 9
* putchar print 0 to 9
* if num is under 9
* then display with putchar , and space
* putchar '\n' to followed by a new line
* Return: 0 always success
*/

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num < '9')


		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

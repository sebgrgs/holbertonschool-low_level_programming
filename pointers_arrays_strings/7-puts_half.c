#include "main.h"

/**
 * 
 * 
 */

void puts_half(char *str)
{
	int a;
	
	int c;

	for (; str[a] != '\0'; a++)
	{

	}
	c = a / 2;
	for (; c < a; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
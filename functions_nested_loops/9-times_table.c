#include "main.h"

/**
 * 
 * 
 */

void times_table(void)
{
	int table;
	int result;

	for (table = 0; table < 10; table++)
	{
		for (result = 0; result < 10; result *= table)
		{
			if (result < 10)
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (result >= 10)
			{	
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		
	}
	_putchar('\n');
}

int main(void)
{
    times_table();
    return (0);
}
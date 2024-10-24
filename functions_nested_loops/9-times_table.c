#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int ligne;
	int result;
	int colonne;

	for (ligne = 0; ligne < 10; ligne++)
	{
		for (colonne = 0; colonne < 10; colonne++)
		{
			result = ligne * colonne;

			if (colonne != 0)
		{
				_putchar(',');
				_putchar(' ');
			if (result < 10)

				_putchar(' ');
		}
			if (result < 10)
			{
				_putchar(result + '0');
			}


			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

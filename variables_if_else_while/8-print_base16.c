#include <stdio.h>

/**
* main - function where the program starts
* Declare variable i and ii of type int
* for: initialize i and loop to print digits from 0 to 9
* 2nd for: initialize ii and loop to print letters from a to f
* putchar convert integer to ASCII character and print it
* putchar ('\n') after the loop to add a new line
* Return: 0 always success
*/

int main(void)
{
    int i;
    int ii;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');
    }
    for (ii = 'a'; ii <= 'f'; ii++)
    {
        putchar(ii);
    }

    putchar('\n');
    return (0);
}

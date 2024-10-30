#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that converts string into integer
 * @s: the pointer to the string
 * Return: Result
 */

int _atoi(char *s)
{
    int result = 0;
    int i = 0;
    int signe = 1;
    int started = 0;

    // Skip leading whitespace
    while (s[i] == ' ')
    {
        i++;
    }

    // Process signs
    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
        {
            signe *= -1;  // Flip sign for each '-'
        }
        i++;
    }

    // Convert characters to integer
    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
            started = 1;  // Mark that we've started processing digits
        }
        else if (started)  // Stop if we've started but hit a non-digit
        {
            break;
        }
        i++;
    }

    // If no digits were found, return 0
    if (!started)
        return 0;

    // Apply the last sign before the digits started
    return result * signe;
}

int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);  // Expected: 98
    nb = _atoi("-402");
    printf("%d\n", nb);  // Expected: -402
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);  // Expected: -98
    nb = _atoi("214748364");
    printf("%d\n", nb);  // Expected: 214748364
    nb = _atoi("0");
    printf("%d\n", nb);  // Expected: 0
    nb = _atoi("Suite 402");
    printf("%d\n", nb);  // Expected: 402
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);  // Expected: 98
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);  // Expected: 402
    return (0);
}

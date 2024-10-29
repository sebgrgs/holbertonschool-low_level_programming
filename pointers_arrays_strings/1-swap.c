#include "main.h"

/**
 * swap_int - function that use pointers to swap values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

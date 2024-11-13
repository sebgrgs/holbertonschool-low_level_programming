#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: bytes to allocate
 * Return: 98 or pointer to test
 */

void *malloc_checked(unsigned int b)
{
	int *test = 0;

	if (b == 0)
	{
		return (NULL);
	}

	test = malloc(b);

	if (test == NULL)
	{
		exit(98);
	}

	return (test);
}

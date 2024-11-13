#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: pointer to the array of integers
 */

int *array_range(int min, int max)
{
	int *array;
	unsigned int i;
	unsigned int value = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * (value));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < value; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int totalsize;
	unsigned int i;
	unsigned char *byte_ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	totalsize = nmemb * size;

	ptr = malloc(totalsize);

	if (ptr == NULL)
	{
		return (NULL);
	}

	byte_ptr = (unsigned char *)ptr;
	for (i = 0; i < totalsize; i++)
	{
		byte_ptr[i] = 0;
	}
	return (ptr);
}

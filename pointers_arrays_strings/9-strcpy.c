#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - function that copies a string
 * @dest: where the string is copied
 * @src: the string copied
 * Return: dest the result of the string copied
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

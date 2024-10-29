#include "main.h"
#include <stdio.h>
/**
 * rev_string - function that reverse a string
 * @s: pointer to the string to be reversed
 */

void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;
	char temp;

	for (; s[length] != '\0'; length++)
	{

	}
	end = length - 1;

	for (; start < end; start++)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		end--;
	}

}

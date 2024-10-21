#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - function wherethe program starts
* Return: always 0 success
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > '0')
		printf("is positive");
	else if (n == '0')
		printf("is zero");
	else
		printf("is negative");
	return (0);
}

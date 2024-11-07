#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function where the program starts
 * @argc: size of argv and number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0 always success
 */

int main(int argc, char *argv[])

{
	int i, j;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);

	return (0);
}

#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int j;
	char *separator = "";

	print_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (types[j].type)
		{
			if (format[i] == types[j].type[0])
			{
				printf("%s", separator);
				types[j].f(ap);
				separator = ", ";
				break;
			}
			j++;
		}
	i++;
	}
	printf("\n");
	va_end(ap);
}

/**
 * print_char - prints a char
 * @ap: argument pointer
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints an int
 * @ap: argument pointer
 */

void print_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_float - prints a float
 * @ap: argument pointer
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string
 * @ap: argument pointer
 */

void print_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

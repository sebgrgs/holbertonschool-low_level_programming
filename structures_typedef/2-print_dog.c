#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("");
	}

	if (d->name == NULL)
	{
		printf("Name: nil\n");
	}

	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: nil\n");
	}

	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
int main(void)
{
    struct dog my_dog;

    my_dog.name = NULL;
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
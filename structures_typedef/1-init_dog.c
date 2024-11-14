#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize varaible of type struct dog
 * @d: pointer to the struct dog
 * @name: pointer to the name of the dog from struct dog
 * @age: pointer to the age of the dog from struct dog
 * @owner: pointer to the owner of the dog from struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = (name);
	d->age = (age);
	d->owner = (owner);
}

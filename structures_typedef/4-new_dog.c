#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;
	int name_len = 0, owner_len = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		name_len++;
	for (i = 0; owner[i] != '\0'; i++)
		owner_len++;

	name_copy = malloc(name_len + 1);
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}
	owner_copy = malloc(owner_len + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		name_copy[i] = name[i];
	name_copy[name_len] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		owner_copy[i] = owner[i];
	owner_copy[owner_len] = '\0';

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;
	return (dog);
}

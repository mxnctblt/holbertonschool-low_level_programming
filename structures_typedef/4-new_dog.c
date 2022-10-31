#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - function creating a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	(*newdog).name = malloc(sizeof(char) * (strlen(name) + 1));
	if ((*newdog).name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	(*newdog).owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if ((*newdog).owner == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->name = strcpy((*newdog).name, name);
	newdog->age = age;
	newdog->owner = strcpy((*newdog).owner, owner);

	return (newdog);
}

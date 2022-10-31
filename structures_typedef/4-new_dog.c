#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - entry point
 * @str: string
 * Return: Always 0.
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _strcpy - entry point
 * @dest: destination
 * @src: source
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

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
		return (NULL);
	newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->name = _strcpy(newdog->name, name);
	newdog->age = age;
	newdog->owner = _strcpy(newdog->owner, owner);

	return (newdog);
}

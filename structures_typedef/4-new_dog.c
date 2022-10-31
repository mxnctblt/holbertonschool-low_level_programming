#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - entry point
 * @s: string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
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
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
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
	(*newdog).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*newdog).name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	(*newdog).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*newdog).owner == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->name = _strcpy((*newdog).name, name);
	newdog->age = age;
	newdog->owner = _strcpy((*newdog).owner, owner);

	return (newdog);
}

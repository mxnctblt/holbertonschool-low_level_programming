#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initializes
 * @d: dog to be initialized
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}


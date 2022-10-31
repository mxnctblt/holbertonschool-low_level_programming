#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to free a dog
 * @d: dog to free
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}

#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - a function that frees dogs
 * dogs is a structure creted using malloc
 * @d: pointer to dogs
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

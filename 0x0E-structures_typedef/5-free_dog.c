#include <stdlib.h>
/**
 * free_dog - a function that frees dogs
 * dogs is a structure creted using malloc
 * @d: pointer to dogs
 */
void free_dog(dog_t *d)
{
	free(d);
}

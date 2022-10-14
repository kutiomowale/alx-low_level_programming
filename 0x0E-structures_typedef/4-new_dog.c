#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, lname, lowner

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;
	for (lowner = 0; owner[owner]; lowner++)
		;

	ptr->name = malloc(sizeof(char) * (lname + 1));
	ptr->owner = malloc(sizeof(char) * (lowner + 1));

	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < lname; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';

	for (i = 0; i < lowner; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';

	return (ptr);
}

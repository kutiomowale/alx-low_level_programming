#include "dog.h"
/**
 * new_dog - a function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *ptr;

	ptr = &new_dog;

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}

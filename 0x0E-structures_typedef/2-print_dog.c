#include <stdio.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * If an element of d is NULL, print (nil) instead of this element.
 * if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 * @d: pointer to variable of type struct dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		printf("Age: %.6f\n", d->age);

		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}

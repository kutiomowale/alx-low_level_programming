#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: size of memory to be allocated
 *
 * Return: a pointer to the allocated memory, or exit(98) on failure
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}

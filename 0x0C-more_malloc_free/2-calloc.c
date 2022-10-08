#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * the memory is set to 0
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 *
 * @nmemb: number of elements of array
 * @size: size of bytes of each element
 *
 * Return: pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * nmemb);

	if (arr == NULL)
	{
		return (NULL);
	}

	return (arr);
}

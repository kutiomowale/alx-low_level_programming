#include <stddef.h>
/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array
 * @array: the array
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size > 0)
		{
			action(*array);
			array++;
			size--;
		}
	}
}

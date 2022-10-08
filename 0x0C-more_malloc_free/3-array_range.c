#include <stdlib.h>
/**
 * array_range - a functio that creates an array of integers
 * The array created contains all the values from min (included) to max
 * (included), ordered from min to max
 *
 * @min: starting value
 * @max: ending value
 *
 * Return: pointer to the newly created array.
 * Null if min > max, or malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < (max - min + 1))
	{
		*(arr + i) = min + i;
		i++;
	}

	return (arr);
}

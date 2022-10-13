/**
 * int_index - a function that searches for an integer
 * @array: the array
 * @size: size is the number of elements in the array array
 * @cmp: cmp is a pointer to the function to be used to compare values
 * Return: int_index returns the index of the first element for which the
 * cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
		return (-1);
	}
	else
	{
		return (-1);
	}
}

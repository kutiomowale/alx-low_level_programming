#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * If width or height is 0 or negative, it returns NULL
 * Each element of the grid is initialized to 0
 *
 * @width: width or number of columns of the array
 * @height: height or number of rows of the array
 *
 * Return: pointer to the 2d array, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		int **arr, i, j;

		arr = (int **)malloc(height * sizeof(int *));

		if (arr == NULL)
		{
			free(arr);
			return (NULL);
		}
		else
		{

			for (i = 0; i < height; i++)
			{
				arr[i] = (int *)malloc(width * sizeof(int));
				if (arr[i] == NULL)
				{
					for (; i >= 0; i--)
						free(arr[i]);
					free(arr);
					return (NULL);
				}
			}

			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
				{
					arr[i][j] = 0;
				}
			}
			return (arr);
		}
	}
}

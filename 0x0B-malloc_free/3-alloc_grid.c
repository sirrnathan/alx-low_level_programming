#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gridout;
	int index, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (index = 0; index < height; index++)
	{
		gridout[index] = malloc(width * sizeof(int));
		if (gridout[index] == NULL)
		{
			for (index--; index >= 0; index--)
				free(gridout[index]);
			free(gridout);
			return (NULL);
		}
	}

	for (index = 0; index < height; index++)
		for (j = 0; j < width; j++)
			gridout[index][j] = 0;

	return (gridout);
}

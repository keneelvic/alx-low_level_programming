#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - entry point
 * @width: rows
 * @height: columns
 * Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int **matrices, ai, je, el, *p;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrices = (int **) malloc(height * sizeof(int *));
	if (matrices == NULL)
		return (NULL);

	for (ai = 0; ai < height; ai++)
	{
		matrices[ai] = (int *) malloc(width * sizeof(int));
		if (matrices[ai] == NULL)
		{
			for (ai = 0; ai < height; ai++)
			{
				p = matrices[ai];
				free(p);
			}
			free(matrices);
			return (NULL);
		}
	}
	for (el = 0; el < height; el++)
	{
		for (je = 0; je < width; je++)
		{
			matrices[el][je] = 0;
		}
	}

	return (matrices);
}

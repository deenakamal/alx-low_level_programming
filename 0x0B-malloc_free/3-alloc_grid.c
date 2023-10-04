#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: on filaiur null
 */
int **alloc_grid(int width, int height)
{
	/* creat double pointer one for row and one for colum */

	int *p;
	int i;
	int j;

	p = malloc(sizeof(*p) * height);

	if (width <= 0 || height <= 0 || p == 0)
	{

		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(sizeof(int*) * width);
			if (p[i] == 0)
			{
				for (; i >= 0 ; i--)
					free(p[i]);
				free(p);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				p[i][j] = 0;
		}
	}
	return (p);
}

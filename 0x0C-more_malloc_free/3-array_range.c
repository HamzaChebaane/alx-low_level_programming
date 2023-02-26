#include "main.h"
#include <sdilib.h>

/**
 * array_range - Creates an array of integers that
 * contains all the values
 * from min (included)
 * to max (included)
 * ordered from min to max
 * @min: integer
 * @max: integer
 * Return: the pointer to the
 * newly created array
 * NULL if it fails
 */

int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	i = max - min;
	p = malloc(l * sizeof(int) + sizeof(int));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  a function that allocates
 * memory using malloc
 * @b: size of memory allocated
 * Return: pointer to memory allocated
 * 98 if it fails
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		return (98);
	return (p);
}

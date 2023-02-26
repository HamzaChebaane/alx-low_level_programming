#include "main.h"
#include <stdlib>

/**
 * _calloc - allocates memory for an array
 * of nmemb elements
 * of size bytes each
 * @nmemb: elements of array to
 * allocate memory for
 * @size: Size of bytes of the elements
 * Return: a pointer to the allocated memory
 * NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0; l = 0;
	char *p;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);
	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}

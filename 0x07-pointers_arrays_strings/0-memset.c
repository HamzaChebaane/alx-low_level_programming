#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: A pointer to the memory area
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while(i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

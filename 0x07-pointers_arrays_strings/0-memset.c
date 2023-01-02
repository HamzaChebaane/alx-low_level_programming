#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: A pointer to the memory area
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; n > i; i++)
	{
		s[i] = b;
	}
	return (s);
}

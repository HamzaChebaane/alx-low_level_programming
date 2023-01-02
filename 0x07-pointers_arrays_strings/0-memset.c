#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: A pointer to the memory area
 * @b: character to fill the memory area
 * @n: number of bytes
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *memo = s, v = b;

	for(i = 0; i < n; i++)
		memo[i] = v;
	return (memo);
}

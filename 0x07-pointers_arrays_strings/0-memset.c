#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: A pointer to the memory area
 * @b: character to fill the memory area
 * @n: number of bytes
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

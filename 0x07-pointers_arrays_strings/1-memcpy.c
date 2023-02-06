#include "main.h"

/**
 * *-memcpy - copies memory area
 *  @dest: destination
 *  @src: source
 *  @n: max bytes
 *
 *  Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > i; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

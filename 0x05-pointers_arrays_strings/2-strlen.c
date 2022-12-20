#include "main.h"

/**
 * int _strlen - returns the length of a string
 * @s: string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int L;

	for (L = 0; s[L] != '\0'; L++);
		return (L);
}

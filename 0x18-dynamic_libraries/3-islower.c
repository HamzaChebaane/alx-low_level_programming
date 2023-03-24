#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: a character
 *
 * Return: 1 if charachter is lower, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

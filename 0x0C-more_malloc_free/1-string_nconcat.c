#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatinates
 * two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes from s2
 * Return: pointer to the allocated memory
 * NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *result;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	while (s1[i])
		i++;

	while (s2[k])
		k++;

	if (n >= k)
		l = i + k;
	else
		l = i + n;

	result = malloc(sizeof(char) * l + 1);
	if (result == NULL)
		return (NULL);

	k = 0;
	while (j < l)
	{
		if (j <= i)
			result[j] = s1[j];

		if (j > i)
		{
			result[j] = s2[k];
			k++;
		}
		j++;
	}
	result[j] = '\0';
	return (result);
}

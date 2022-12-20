#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 */

void rev_string(char *s)
{
	int i, j, k, l;

	i = 0;
	while (s[i] != '\n')
	{
		i++;
	}
	l = i;
	i = 0;
	j = l - 1;

	while (i < j)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
		i++;
		j--;
	}
}

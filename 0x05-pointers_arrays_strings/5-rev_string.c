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
	while (s[i] = != '\n')
	{
		i++;
	}
	k = 0:
		j = i - 1;

	while (k < j)
	{
		l = s[k];
		s[k] = s[j];
		s[j] = l;
		k++;
		j--;
	}
}

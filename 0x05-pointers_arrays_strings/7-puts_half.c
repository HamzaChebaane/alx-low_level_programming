#include "main.h"

/**
 * puts_half - prints half of a string,
 * followed by a new line
 * @str: string
 */

void puts_half(char *str)
{
	int i, h;

	i = 0;
	while (str[i] != '\0')
		i++;

	h = i / 2;
	if (i % 2 == 1)
		h++;

	while (h < i)
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}

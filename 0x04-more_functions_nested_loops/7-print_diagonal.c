#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal
 * line on the terminal
 * @n: number of times the character
 * \ should be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j < i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(92);
					_putchar('\n');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

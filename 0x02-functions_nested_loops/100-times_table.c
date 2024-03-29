#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: int greater than 15 or less than 0
 */

void print_times_table(int n)
{
	int i, j, l;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; (i <= n); i++)
		{
			for (j = 0; (j <= n); j++)
			{
				l = j * i;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (l < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((l) + '0');
				}
				else if (l < 100 && l >= 10)
				{
					_putchar(' ');
					_putchar((l / 10) + '0');
					_putchar((l % 10) + '0');
				}
				else if (l >= 100)
				{
					_putchar((l / 100) + '0');
					_putchar(((l / 10) % 10) + '0');
					_putchar((l % 10)  + '0');
				}
				else
				{
					_putchar('0');
				}
			}
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: int greater than 15 or less than 0
 */

void print_times_table(int n)
{
	int i;
	int j;
	int l;

	if (n < 15 && n > 0)
	{
	for (i = 0; (i <= n); i++)
	for (j = 0; (j <= n); j++)
	{
		l = j * i;
	_putchar(l);
	_putchar(',');
	_putchar(' ');
	}
	_putchar('\n');
	}
	return;
}

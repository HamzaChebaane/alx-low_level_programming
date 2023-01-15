#include <stdio.h>

/**
 * main - Enter point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j;

	for (i = 48; i <= 56; i++)
		j = i + 1;

	for (j = i + 1; j <= 57; j++)
	{
		putchar(i);
	putchar(j);
	putchar(' ');
	putchar(',');
	}
	return (0);
}

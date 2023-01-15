#include <stdio.h>

/**
 * main - Enter point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = '0';
	char j;

	for (i = '0'; i <= '9'; i++)
		j = i + 1;

	for (j = i + 1; j <= 9; j++)
	{
		putchar(i);
	putchar(j);
	putchar(' ');
	putchar(',');
	}
	return (0);
}

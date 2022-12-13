#include "main.h"

/**
 * int print_sign - prints the sign of a number
 *@n: number to be checked
 *
 * Return: 1 if n is greater than zero, 0 if n is zero and -1 if n is less than
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
	return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else
	{
		putchar('0');
	return (0);
	}
}

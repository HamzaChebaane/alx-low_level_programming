#include "main.h"
#include <stdio.h>

/**
 * main - The “Fizz-Buzz test” interview
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			_putchar(' ');
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			_putchar(' ');
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			_putchar(' ');
			printf("Fizz");
		}
		else if (i != 0)
		{
			_putchar(' ');
			_putchar(i + '0');
		}
		else
		{
			_putchar(48);
		}
	}
	return(0);
}

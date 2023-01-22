#include <stdio.h>

/**
 * main - The “Fizz-Buzz test” interview
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i = 1))
		{
			putchar(49);
		}
		if (i % 15 == 0)
		{
			putchar(' ');
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			putchar(' ');
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			putchar(' ');
			printf("Fizz");
		}
		else if (i != 1)
		{
			putchar(' ');
			putchar(i + '0');
		}
	}
	return(0);
}

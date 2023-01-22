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
		else if (i != 0)
		{
			putchar(' ');
			putchar(i + '0');
		}
		else
		{
			putchar(48);
		}
	}
	return(0);
}

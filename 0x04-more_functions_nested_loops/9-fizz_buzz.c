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
			printf("%d", i);
		}
		else
		{
			putchar(49);
		}
	}
	putchar('\n');
	return (0);
}

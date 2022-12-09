#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	double d;
	char c;
	printf("The size of an int is: %lu. \n", (unsigned long)sizeof(i));
	printf("The size of an double is: %lu. \n", (unsigned long)sizeof(d));
	printf("The size of an char is: %lu. \n", (unsigned long)sizeof(c));

	return (0);
}

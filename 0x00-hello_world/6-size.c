#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int d;
	char c;
	long long int e;
	float f;
	
	printf("The size of a char: %lu \n", (unsigned long)sizeof(c));
	printf("The size of an int: %lu \n", (unsigned long)sizeof(i));
	printf("The size of a long int: %ly \n", (unsigned long)sizeof(d));
	printf("The size of a long long int: %lu \n", (unsigned long)sizeof(e));
	printf("The size of a float: %lu \n", (unsigned long)sizeof(f));


	return (0);
}

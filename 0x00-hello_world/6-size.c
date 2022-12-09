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
	
	printf("The size of a char is: %lu \n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu \n", (unsigned long)sizeof(i));
	printf("The size of a long int is: %ly \n", (unsigned long)sizeof(d));
	printf("The size of a long long int is: %lu \n", (unsigned long)sizeof(e));
	printf("The size of a float is: %lu \n", (unsigned long)sizeof(f));


	return (0);
}

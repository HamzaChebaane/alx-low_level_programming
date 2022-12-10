#include <stdio.h>



/**
 *main - Enter point
 *
 *Return: Always 0 (Success)
 */

int main(void)

{
	int c;
	int d;
	int r;

	c = 0;
	d = 1;

	while (c <= 9)

{

	r = c + c * d;
	c++;
	d++;
										}

	printf ("%d", r);
	return (0);

}

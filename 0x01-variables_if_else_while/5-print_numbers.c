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
	r = 0;

	while (c < 10)

{

	r = r + c * d;
	c++;
	d = d * 10;
										}

	printf ("%d", r);
	return (0);

}

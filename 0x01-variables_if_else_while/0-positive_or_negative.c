#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n<0)
					{
					printf("The number is negative\n");
					}
					else if (n==0)
					{
					printf("The number is zero\n");
					}
					else
					{
					printf("The number is positive\n")
					}

					return (0);
}

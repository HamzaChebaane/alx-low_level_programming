#include <stdio.h>

/**
 *main - Enter point
 *
 *Return: Always 0 (Success)
 */



int main(void)

{

int c;

c = 0;
while (c < 10)
{
putchar("%d", c);
c++;
}
putchar('\n');
return (0);
}

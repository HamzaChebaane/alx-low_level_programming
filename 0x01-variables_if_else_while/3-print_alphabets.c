#include <stdio.h>

/**
 *main - Enter point
 *
 *Return: Always 0 (Success)
 */



int main(void)

{
	char c;
	char d;

c = 'a';
d = 'A'


while (c <= 'z')
{
putchar(c);
	c++;
}
while (c = 'z' && d <= 'A')
{putchar(d);
	d++;
}
putchar ('\n');
return (0);
}

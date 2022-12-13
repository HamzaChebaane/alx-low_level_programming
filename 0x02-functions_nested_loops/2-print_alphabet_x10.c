#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int i;
char pr;

	for (i = 0; i <= 9; i++)
	{
		for (pr = 'a' ; pr <= 'z'; pr++)
			_putchar(pr);
	_putchar('\n');
	}
}

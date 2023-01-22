#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - that prints a name
 * @name: name
 * @f: pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

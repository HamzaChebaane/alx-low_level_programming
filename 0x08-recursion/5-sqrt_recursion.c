#include "main.h"

/**
 * sqrt1 - Makes possible to evaluate from 1 to n/2
 * @a: same number as n
 * @b: iterate from 1 to n/2
 * Return: On success 1
 * -1 on error
 */

int sqrt1(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b >= (a / 2))
		return (-1);
	return (sqrt1(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Integer
 * Return: On success 1
 * On error, -1 is returned
 */

int _sqrt_recursion(int n)
{
	return (sqrt1(n, 1));
}

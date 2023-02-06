#include "main.h"

/**
 * sqrt - Makes possible to evaluate from 1 to n/2
 * @a: same number as n
 * @b: iterate from 1 to n/2
 * Return: On success 1
 * -1 on error
 */

sqrt (int a, int b)
{
	if (b * b == a)
		return (b);
	else if (a >= (n / 2))
		return (-1);
	return (sqrt(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Integer
 * Return: On success 1
 * On error, -1 is returned
 */

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

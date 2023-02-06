#include "main.h"

/**
 * prime1 - evaluate from 1 to n
 * @a: same as n
 * @b: iterate from 1 to n
 * Return: On success 1
 * 0 otherwise
 */

int prime1(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime1(a, b + 1));
}
/**
 * is_prime_number - tests if the input integer is a prime number
 * @n: int to bes tested
 * Return: On success 1
 * 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime1(n, 2));
}

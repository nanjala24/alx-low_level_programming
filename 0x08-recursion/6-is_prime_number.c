#include "main.h"

/**
 * help - helps prime functions
 * @n: the integer
 * @x: check if n is divisible by x
 * Return: 0 if not prime, 1 if it is prime
 */
int help(int n, int x)
{
	if (x > 9)
		return (1);
	else if (n % x != 0)
		return (help(n, ++x));
	return (0);
}

/**
 * is_prime_number - function to check for prime number
 * @n: the integer
 * Return: 1 on success
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1 || n == 0)
		return (0);
	return (help(n, 2));
}

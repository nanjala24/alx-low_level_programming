#include "main.h"

/**
 * sqrt - return natural square root of a number
 * @n: the integer
 * @x: another integer
 * Return: 1 on success
 */

int sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
	return (sqrt(n, ++x));
	return (-1);
}
/**
 * _sqrt_recursion - returns root natural of a number
 * @n: an integer
 * Return: natural sqrt of a number
 */

int _sqrt_recursion(int n)
{
	return (sqrt(n, 0));
}

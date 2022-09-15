#include "main.h"
/**
 * _abs - function that computes the absolute integer
 *@c: is the int that we will use in the argument of the function 
 * Return: 0 on success
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	return (c * -1);
}


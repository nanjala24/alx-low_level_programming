#include "main.h"
/**
 * _abs - function that computes the absolute integer
 * 
 * Return: 0 on success
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}


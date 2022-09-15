#include "main.h"
/**
 * print_sign - function to check for sign of a number
 * author: nanjala24
 * Return: 0
 */
int print_sign(int j)
{
	if (j > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (j < 0)
	{
		_putchar('-')
			return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}


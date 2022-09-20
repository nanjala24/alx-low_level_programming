#include <stdio.h>
#include "main.h"

/**
 * print array - prints n elements of an array of integers
 * @i: integer
 * @n: another integer
 * Return: 0
 */

void print_array(int i, int n)
{
	int i;
	i = 0;
	while (i < n)
	{
	printf("%d", a[i]);

	if (i < n - 1)
	printf(", ");
	i++;
}
printf("\n");



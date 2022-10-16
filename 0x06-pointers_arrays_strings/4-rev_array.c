#include "main.h"

/**
 * reverse_array - function to reverse an array.
 * @a: a pointer to the array
 * @n: the number of elememnts in the array
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}


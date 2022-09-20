#include "main.h"

/**
 * swap_int - a pointer that is used to swap int
 * @a: an int to be swapped
 * @b: an int swapped into
 * Return: 0 always on success
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

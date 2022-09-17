#include "main.h"
#include <stdio.h>

/**
 *print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 */

void print_triangle(int size)
{
int i, j, k;

if (size > 0)
{

for (k = (size - 1); k > i; --k)
{
putchar(' ');
}

for (j =0; j <= i; ++j)
{
putchar('#');
}
putchar('\n');
}
}
else
putchar('\n');
}
 

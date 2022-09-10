#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -entry point
 * Description: combinations of single-digit numbers.
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar(( i% 10) + '0');
		if (i != 19)
		{putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

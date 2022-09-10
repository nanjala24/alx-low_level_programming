#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -entry point
 * Description: a program that prints all possible combinations of single-digit numbers.
 * Return: 0 (success)
 */
int main(void)
{
	int numberz;
	
	for (numberz = 48; numberz < 58; numberz++)
	{
		putchar(numberz);
		if (numberz != 57)
				{
				putchar(',');
				putchar(' ');
				}
				}
				putchar('\n');
				return (0);

				}

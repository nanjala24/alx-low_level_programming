#include <stdio.h>
#include "main.h"

/**
 * main - pritnts all the arguments it receives
 * @argc: counts number of arguments
 * @argv: arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}

